0x43F900: sub     esp, 0Ch
0x43F903: push    ebx
0x43F904: mov     ebx, ds:0B06A2Ch
0x43F90A: xor     eax, eax
0x43F90C: push    ebp
0x43F90D: mov     ebp, ecx
0x43F90F: shr     ebx, 1
0x43F911: mov     ecx, eax
0x43F913: mov     [esp+14h+var_C], eax
0x43F917: mov     [esp+14h+var_8], ebx
0x43F91B: mov     [esp+14h+var_4], ecx
0x43F91F: jz      loc_43FA22
0x43F925: push    esi
0x43F926: push    edi
0x43F927: test    ecx, ecx
0x43F929: jnz     short loc_43F95B
0x43F92B: mov     ecx, [ebp+8]
0x43F92E: push    ebx
0x43F92F: push    ebx
0x43F930: call    GetGridEntry
0x43F935: test    eax, eax
0x43F937: jz      loc_43FA30
0x43F93D: mov     ecx, [eax]
0x43F93F: test    ecx, ecx
0x43F941: jz      loc_43FA30
0x43F947: movzx   ecx, byte ptr [ecx+24h]
0x43F94B: shr     ecx, 1
0x43F94D: test    cl, 1
0x43F950: jz      loc_43FA30
0x43F956: jmp     loc_43FA2C
0x43F95B: lea     edi, [ecx+ebx]
0x43F95E: sub     ebx, ecx
0x43F960: cmp     ebx, edi
0x43F962: mov     esi, ebx
0x43F964: ja      short loc_43F9B1
0x43F966: mov     ecx, [ebp+8]
0x43F969: push    edi
0x43F96A: push    esi
0x43F96B: call    GetGridEntry
0x43F970: test    eax, eax
0x43F972: jz      short loc_43F985
0x43F974: mov     ecx, [eax]
0x43F976: test    ecx, ecx
0x43F978: jz      short loc_43F985
0x43F97A: movzx   edx, byte ptr [ecx+24h]
0x43F97E: shr     edx, 1
0x43F980: test    dl, 1
0x43F983: jnz     short loc_43F9AD
0x43F985: mov     ecx, [ebp+8]
0x43F988: push    ebx
0x43F989: push    esi
0x43F98A: call    GetGridEntry
0x43F98F: test    eax, eax
0x43F991: jz      short loc_43F9A4
0x43F993: mov     ecx, [eax]
0x43F995: test    ecx, ecx
0x43F997: jz      short loc_43F9A4
0x43F999: movzx   ecx, byte ptr [ecx+24h]
0x43F99D: shr     ecx, 1
0x43F99F: test    cl, 1
0x43F9A2: jnz     short loc_43F9AD
0x43F9A4: add     esi, 1
0x43F9A7: cmp     esi, edi
0x43F9A9: jbe     short loc_43F966
0x43F9AB: jmp     short loc_43F9B1
0x43F9AD: mov     [esp+1Ch+var_C], eax
0x43F9B1: mov     eax, [esp+1Ch+var_C]
0x43F9B5: test    eax, eax
0x43F9B7: jnz     short loc_43FA20
0x43F9B9: lea     esi, [ebx+1]
0x43F9BC: cmp     esi, edi
0x43F9BE: jnb     short loc_43FA05
0x43F9C0: mov     ecx, [ebp+8]
0x43F9C3: push    esi
0x43F9C4: push    ebx
0x43F9C5: call    GetGridEntry
0x43F9CA: test    eax, eax
0x43F9CC: jz      short loc_43F9DF
0x43F9CE: mov     ecx, [eax]
0x43F9D0: test    ecx, ecx
0x43F9D2: jz      short loc_43F9DF
0x43F9D4: movzx   edx, byte ptr [ecx+24h]
0x43F9D8: shr     edx, 1
0x43F9DA: test    dl, 1
0x43F9DD: jnz     short loc_43FA28
0x43F9DF: mov     ecx, [ebp+8]
0x43F9E2: push    esi
0x43F9E3: push    edi
0x43F9E4: call    GetGridEntry
0x43F9E9: test    eax, eax
0x43F9EB: jz      short loc_43F9FE
0x43F9ED: mov     ecx, [eax]
0x43F9EF: test    ecx, ecx
0x43F9F1: jz      short loc_43F9FE
0x43F9F3: movzx   ecx, byte ptr [ecx+24h]
0x43F9F7: shr     ecx, 1
0x43F9F9: test    cl, 1
0x43F9FC: jnz     short loc_43FA28
0x43F9FE: add     esi, 1
0x43FA01: cmp     esi, edi
0x43FA03: jb      short loc_43F9C0
0x43FA05: mov     ebx, [esp+1Ch+var_8]
0x43FA09: mov     ecx, [esp+1Ch+var_4]
0x43FA0D: add     ecx, 1
0x43FA10: cmp     ecx, ebx
0x43FA12: mov     [esp+1Ch+var_4], ecx
0x43FA16: jb      loc_43F927
0x43FA1C: mov     eax, [esp+1Ch+var_C]
0x43FA20: pop     edi
0x43FA21: pop     esi
0x43FA22: pop     ebp
0x43FA23: pop     ebx
0x43FA24: add     esp, 0Ch
0x43FA27: retn
0x43FA28: mov     ebx, [esp+1Ch+var_8]
0x43FA2C: mov     [esp+1Ch+var_C], eax
0x43FA30: mov     eax, [esp+1Ch+var_C]
0x43FA34: test    eax, eax
0x43FA36: jnz     short loc_43FA20
0x43FA38: jmp     short loc_43FA09
