0x4EEEF0: push    ebx
0x4EEEF1: push    ebp
0x4EEEF2: mov     ebx, ecx
0x4EEEF4: fld     dword ptr [ebx+0ACh]
0x4EEEFA: push    esi
0x4EEEFB: push    edi
0x4EEEFC: call    Double_To_SInt32
0x4EEF01: fld     dword ptr [ebx+0B0h]
0x4EEF07: mov     esi, eax
0x4EEF09: sar     esi, 0Ch
0x4EEF0C: call    Double_To_SInt32
0x4EEF11: fld     dword ptr [ebx+0B4h]
0x4EEF17: mov     ebp, eax
0x4EEF19: sar     ebp, 0Ch
0x4EEF1C: call    Double_To_SInt32
0x4EEF21: mov     edi, eax
0x4EEF23: mov     eax, [esp+10h+a2]
0x4EEF27: sar     edi, 0Ch
0x4EEF2A: cmp     eax, edi
0x4EEF2C: jg      short loc_4EEF65
0x4EEF2E: cmp     eax, esi
0x4EEF30: jl      short loc_4EEF65
0x4EEF32: fld     dword ptr [ebx+0B8h]
0x4EEF38: call    Double_To_SInt32
0x4EEF3D: mov     ecx, [esp+10h+a3]
0x4EEF41: sar     eax, 0Ch
0x4EEF44: cmp     ecx, eax
0x4EEF46: jg      short loc_4EEF65
0x4EEF48: cmp     ecx, ebp
0x4EEF4A: jl      short loc_4EEF65
0x4EEF4C: mov     eax, edi
0x4EEF4E: sub     eax, esi
0x4EEF50: add     eax, 1
0x4EEF53: sub     ecx, ebp
0x4EEF55: imul    eax, ecx
0x4EEF58: pop     edi
0x4EEF59: sub     eax, esi
0x4EEF5B: add     eax, [esp+0Ch+a2]
0x4EEF5F: pop     esi
0x4EEF60: pop     ebp
0x4EEF61: pop     ebx
0x4EEF62: retn    8
0x4EEF65: pop     edi
0x4EEF66: pop     esi
0x4EEF67: pop     ebp
0x4EEF68: or      eax, 0FFFFFFFFh
0x4EEF6B: pop     ebx
0x4EEF6C: retn    8
