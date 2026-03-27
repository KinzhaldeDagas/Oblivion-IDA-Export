0x4168C5: movsx   ecx, byte ptr [edx+3]
0x4168C9: lea     eax, [esp+0]
0x4168CC: push    eax
0x4168CD: movsx   eax, byte ptr [edx+2]
0x4168D1: shl     ecx, 8
0x4168D4: or      ecx, eax
0x4168D6: movsx   eax, byte ptr [edx+1]
0x4168DA: movsx   edx, byte ptr [edx]
0x4168DD: shl     ecx, 8
0x4168E0: or      ecx, eax
0x4168E2: shl     ecx, 8
0x4168E5: or      ecx, edx
0x4168E7: push    ecx
0x4168E8: mov     ecx, offset EffectSettingCollection
0x4168ED: mov     dword ptr [esp+8], 0
0x4168F5: call    NiTMap_GetAt
0x4168FA: mov     eax, [esp+0]
0x4168FD: pop     ecx
0x4168FE: retn
