0x46C640: cmp     byte ptr [esp+arg_0], 0
0x46C645: push    esi
0x46C646: mov     esi, ecx
0x46C648: mov     eax, [esi+8]
0x46C64B: jz      short TESForm_SetFromActiveFile___CheckRemoveFromActiveFile
0x46C64D: mov     ecx, eax
0x46C64F: shr     ecx, 1
0x46C651: test    cl, 1
0x46C654: jnz     short TESForm_SetFromActiveFile___SetFlag_FromActiveFile
0x46C656: shr     eax, 0Eh
0x46C659: test    al, 1
0x46C65B: jnz     short TESForm_SetFromActiveFile___SetFlag_FromActiveFile
0x46C65D: mov     ecx, ds:0B06158h
0x46C663: xor     eax, eax
0x46C665: test    ecx, ecx
0x46C667: jbe     short TESForm_SetFromActiveFile___AddToActiveFile
0x46C669: mov     edx, ds:0B06150h
0x46C66F: nop
0x46C670: cmp     [edx+eax*4], esi
0x46C673: jz      short TESForm_SetFromActiveFile___SetFlag_FromActiveFile
0x46C675: add     eax, 1
0x46C678: cmp     eax, ecx
0x46C67A: jb      short loc_46C670
0x46C67C: lea     edx, [esp+4+arg_0]
0x46C680: push    edx
0x46C681: mov     ecx, offset TESForm_ActiveFileFormList
0x46C686: mov     [esp+8+arg_0], esi
0x46C68A: call    NiTArray_AddItem?
0x46C68F: or      dword ptr [esi+8], 2
0x46C693: pop     esi
0x46C694: retn    4
0x46C697: shr     eax, 1
0x46C699: test    al, 1
0x46C69B: jz      short TESForm_SetFromActiveFile___ClearFlag_FromActiveFile
0x46C69D: mov     edx, ds:0B06158h
0x46C6A3: xor     eax, eax
0x46C6A5: test    edx, edx
0x46C6A7: jbe     short TESForm_SetFromActiveFile___ClearFlag_FromActiveFile
0x46C6A9: mov     ecx, ds:0B06150h
0x46C6AF: nop
0x46C6B0: cmp     [ecx+eax*4], esi
0x46C6B3: jz      short TESForm_SetFromActiveFile___RemoveFromActiveFile
0x46C6B5: add     eax, 1
0x46C6B8: cmp     eax, edx
0x46C6BA: jb      short loc_46C6B0
0x46C6BC: and     dword ptr [esi+8], 0FFFFFFFDh
0x46C6C0: pop     esi
0x46C6C1: retn    4
0x46C6C4: cmp     eax, edx
0x46C6C6: jnb     short TESForm_SetFromActiveFile___ClearFlag_FromActiveFile
0x46C6C8: mov     edx, [ecx+eax*4]
0x46C6CB: test    edx, edx
0x46C6CD: mov     dword ptr [ecx+eax*4], 0
0x46C6D4: jz      short loc_46C6DD
0x46C6D6: sub     dword ptr ds:0B0615Ch, 1
0x46C6DD: mov     ecx, ds:0B06158h
0x46C6E3: add     ecx, 0FFFFFFFFh
0x46C6E6: cmp     eax, ecx
0x46C6E8: jnz     short TESForm_SetFromActiveFile___ClearFlag_FromActiveFile
0x46C6EA: mov     ds:0B06158h, ecx
0x46C6F0: and     dword ptr [esi+8], 0FFFFFFFDh
0x46C6F4: pop     esi
0x46C6F5: retn    4
