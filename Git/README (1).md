# Module 07 – Git and GitHub

A beginner-friendly reference for Git and GitHub, covering version control concepts, essential commands and collaborative development.

## 1. Introduction

**Git:** A distributed version control system used to track changes in files and manage project history.

**GitHub:** An online platform for hosting Git repositories and collaborating on software projects.

| Git | GitHub |
|---|---|
| Version control tool | Hosting and collaboration platform |
| Works locally | Provides remote repositories |
| Tracks project changes | Shares and reviews projects |

## 2. Installation and Configuration

| Command | Purpose |
|---|---|
| `git --version` | Check Git installation |
| `git config --global user.name "Name"` | Set username |
| `git config --global user.email "email"` | Set email |
| `git config --global --list` | View configuration |

## 3. Repository Commands

| Command | Purpose |
|---|---|
| `git init` | Initialize a Git repository |
| `git clone URL` | Clone a remote repository |
| `git status` | Check repository status |
| `git remote -v` | List configured remotes |
| `git remote add origin URL` | Connect a remote repository |

## 4. Basic Git Workflow

The basic workflow is:

**Working Directory → Staging Area → Local Repository → Remote Repository**

| Command | Purpose |
|---|---|
| `git add filename` | Stage a specific file |
| `git add .` | Stage all changes in the current directory |
| `git commit -m "message"` | Record staged changes |
| `git push` | Upload commits to remote |
| `git pull` | Fetch and integrate remote changes |
| `git fetch origin` | Download remote updates without integrating them |

## 5. Viewing Changes and History

| Command | Purpose |
|---|---|
| `git log` | View commit history |
| `git log --oneline` | View compact commit history |
| `git diff` | View unstaged changes |
| `git diff --staged` | View staged changes |
| `git diff HEAD` | Compare tracked changes with the current commit |
| `git ls-files` | List files tracked by Git |

## 6. File Management

| Command | Purpose |
|---|---|
| `git mv old.py new.py` | Rename or move a tracked file |
| `git rm filename` | Remove a tracked file |
| `git restore --staged filename` | Unstage a file while preserving working changes |
| `git restore filename` | Discard unstaged changes to a tracked file |

**Important:** `git restore filename` can permanently discard uncommitted changes. Inspect them with `git diff` first.

## 7. Undoing Commits

| Command | Purpose |
|---|---|
| `git revert COMMIT_ID` | Create a new commit that reverses an earlier commit |
| `git log --oneline` | Find a commit ID |

**Difference:**
- `git restore` deals with file changes.
- `git revert` reverses changes introduced by a commit while preserving existing history.

## 8. Branch Management

A branch provides an independent line of development.

| Command | Purpose |
|---|---|
| `git branch` | List local branches |
| `git branch branch-name` | Create a branch |
| `git switch branch-name` | Switch branches |
| `git switch -c branch-name` | Create and switch to a branch |
| `git branch -M main` | Rename the current branch to main |
| `git merge branch-name` | Merge another branch into the current branch |

### Merge vs Rebase

| Command | Purpose |
|---|---|
| `git merge branch-name` | Integrate another branch's changes |
| `git rebase main` | Replay current branch commits on top of main |

Rebase rewrites commit identities. Avoid rebasing shared commits unless you understand the consequences.

## 9. GitHub Commands

| Command | Purpose |
|---|---|
| `git remote add origin URL` | Add GitHub as a remote |
| `git remote -v` | Verify remote connections |
| `git branch -M main` | Rename branch to main |
| `git push -u origin main` | Push main and set upstream |
| `git push` | Push commits |
| `git pull origin main` | Pull changes from remote main |
| `git fetch origin` | Fetch remote updates |
| `git clone URL` | Download a remote repository |

### Complete Upload Workflow

```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin REPOSITORY_URL
git push -u origin main
```

Replace `REPOSITORY_URL` with your actual GitHub repository URL.

## 10. Tags and Releases

| Command | Purpose |
|---|---|
| `git tag` | List tags |
| `git tag -a v1.0.0 -m "Version 1.0.0"` | Create an annotated tag |
| `git show v1.0.0` | View tag details |
| `git push origin v1.0.0` | Push a tag to remote |

Tags identify important points in repository history, often representing software versions.

## 11. .gitignore

The `.gitignore` file tells Git which untracked files and directories to ignore.

Example:

```gitignore
__pycache__/
*.pyc
.env
*.log
data/
```

Common uses:
- Temporary files and caches.
- Local environment configuration.
- Log files.
- Large datasets.

## 12. GitHub Collaboration

### Important Concepts

- **Fork:** Creates a separate hosted copy of a repository.
- **Clone:** Creates a local copy of a repository.
- **Pull Request (PR):** Proposes changes for review and integration into another branch.
- **Merge Conflict:** Occurs when Git cannot automatically combine competing changes.
- **Code Review:** Reviewing proposed changes before integration.
- **Issues:** Used to report bugs, suggest features and track tasks.
- **GitHub Projects:** Used to organize tasks and track progress.

### Typical Collaboration Workflow

1. Fork or clone a repository.
2. Create a feature branch.
3. Modify and test files.
4. Stage and commit changes.
5. Push the feature branch.
6. Open a Pull Request.
7. Review and merge the changes.

## 13. Best Practices

1. Commit changes frequently.
2. Write meaningful commit messages.
3. Use descriptive branch names.
4. Review changes using `git diff`.
5. Fetch or pull remote updates regularly.
6. Test changes before merging.
7. Never commit passwords, API keys or private tokens.
8. Use `.gitignore` for unnecessary generated files.
9. Maintain a clear README.

## 14. Important Reminder

- `git fetch` downloads remote updates but does not integrate them into your current branch.
- `git pull` fetches and integrates remote changes.
- `git push` uploads local commits.
- A Pull Request is a GitHub collaboration feature, not a Git command.
- `git add` stages changes; `git commit` records them.

---

**Learning Reference:** MNIT Jaipur – *Version Control Tools: Git and GitHub*, Prof. Neeta Nain, October 2026.