# Siemens-Diploma-Task-1-Version-Control-Systems
## Note : 
I just realized it could have been better if i rebased in main from second branch so that it becomes very clear from the first look what the second branch was responsible for.

## Applying github commands :

1- creating local repository :
	
	git init

2- linking existing repo to local repo :
	
	git remote add origin git@github.com:AhmedS1ayed/Siemens-Diploma-Task-1-Version-Control-Systems.git

3- going to main branch :

	git branch
	git checkout main 

4- writing main and sum function.

5- add files :
	
	git add *

6- commit in the local repo.

	git commit -m "add"

7- push to the main

8- creating new branch First_branch :

	git checkout -b First_branch

9- writing avg function code , add ,commit , push :

	git push origin First_branch

10- creating new branch Second_branch , writing min function code , add , commit , push.

11- going to main branch :

	git checkout main

12- rebase locally rebase with first branch :

	git rebase First_branch

13- There were no conflicts so i pushed .

14- going to Second_branch :
	
	git checkout Second_branch

15- rebase with main

	git rebase main

16- there were conflicts so i had to fix them.

17- Now i am not in branch i am in (no branch, rebasing Second_branch).

18- after resolving conflicts add files :

	git add *
	git rebase --continue

19- Now i am in Second_branch but locally .

20- i had to force push after that rebase :

	git push -f origin Second_branch		

21- going to main and rebasing with Second_branch :
	
	git rebase Second_branch 

22- No conflicts, add commit push.
