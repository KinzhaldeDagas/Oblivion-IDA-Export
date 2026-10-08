0x5AC7B0: mov     eax, [esp+arg_0]; LevelUpMenu click dispatcher. Exit commits the level-up; attribute-row clicks toggle one of the menu's three available selections.
0x5AC7B4: cmp     eax, 1
0x5AC7B7: push    ebp
0x5AC7B8: mov     ebp, ecx
0x5AC7BA: jnz     short LevelUpMenu_HandleClick___StatItemClicked; Attribute-row toggle logic for LevelUpMenu. It displays base plus the oldest bucket's derived bonus, enforces the native cap of 100, and permits at most three selected attributes.
