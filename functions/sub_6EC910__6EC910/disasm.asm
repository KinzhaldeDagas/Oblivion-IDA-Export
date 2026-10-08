0x6EC910: push    ebx
0x6EC911: mov     ebx, [esp+4+arg_0]
0x6EC915: push    esi
0x6EC916: push    edi
0x6EC917: mov     edi, [esp+0Ch+arg_4]
0x6EC91B: push    edi
0x6EC91C: push    ebx
0x6EC91D: mov     esi, ecx
0x6EC91F: call    NiTimeController_CopyMembers; Copies flags and timing values through +0x24. Remaps target +0x30 through the clone map only when runtime types match, and clones the refcounted next-controller chain at +0x34. Runtime cache +0x28 and update/force bytes are not copied here.
0x6EC924: mov     ecx, [esi+40h]
0x6EC927: test    ecx, ecx
0x6EC929: jz      short loc_6EC93B
0x6EC92B: mov     eax, [ecx]
0x6EC92D: mov     edx, [eax+18h]
0x6EC930: push    edi
0x6EC931: call    edx
0x6EC933: push    eax
0x6EC934: mov     ecx, ebx
0x6EC936: call    sub_6EC7C0
0x6EC93B: pop     edi
0x6EC93C: pop     esi
0x6EC93D: pop     ebx
0x6EC93E: retn    8
