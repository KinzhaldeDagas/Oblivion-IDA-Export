0x579220: push    1; arg1
0x579222: push    0; canCreate
0x579224: call    InterfaceManager_GetSingleton
0x579229: add     esp, 8
0x57922C: test    eax, eax
0x57922E: jz      short locret_579255
0x579230: push    1; arg1
0x579232: push    0; canCreate
0x579234: call    InterfaceManager_GetSingleton
0x579239: add     esp, 8
0x57923C: cmp     dword ptr [eax+1Ch], 0
0x579240: jz      short locret_579255
0x579242: push    1; arg1
0x579244: push    0; canCreate
0x579246: call    InterfaceManager_GetSingleton
0x57924B: add     esp, 8
0x57924E: mov     ecx, eax
0x579250: jmp     InterfaceManager__UpdateMenuFades; Verified: reads GetTimerPercent and Menu fade state +0x24. State 2 completion sets state 4; if root trait 0x1772==2, destroys MenuTopicManager for DialogMenu at 0x584230 then invokes root tile deleting destructor at 0x584255. Otherwise hides root. State 8 completion sets state 1. This is the normal deferred destruction path, separate from StartFadeOut.
0x579255: retn
