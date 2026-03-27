0x5E60B0: mov     eax, [ecx]
0x5E60B2: mov     edx, [eax+154h]
0x5E60B8: push    esi
0x5E60B9: call    edx
0x5E60BB: push    offset off_A3FA90
0x5E60C0: mov     ecx, eax
0x5E60C2: call    NiObjectNET_GetExtraData
0x5E60C7: mov     esi, eax
0x5E60C9: test    esi, esi
0x5E60CB: jz      short loc_5E6101
0x5E60CD: mov     eax, [esi]
0x5E60CF: mov     edx, [eax+4]
0x5E60D2: mov     ecx, esi
0x5E60D4: call    edx
0x5E60D6: test    eax, eax
0x5E60D8: jz      short loc_5E60EE
0x5E60DA: lea     ebx, [ebx+0]
0x5E60E0: cmp     eax, offset dword_B35294
0x5E60E5: jz      short loc_5E60FD
0x5E60E7: mov     eax, [eax+4]
0x5E60EA: test    eax, eax
0x5E60EC: jnz     short loc_5E60E0
0x5E60EE: xor     al, al
0x5E60F0: neg     al
0x5E60F2: sbb     eax, eax
0x5E60F4: and     eax, esi
0x5E60F6: jz      short loc_5E6101
0x5E60F8: fld     dword ptr [eax+0Ch]
0x5E60FB: pop     esi
0x5E60FC: retn
0x5E60FD: mov     al, 1
0x5E60FF: jmp     short loc_5E60F0
0x5E6101: fld1
0x5E6103: pop     esi
0x5E6104: retn
