0x4788E0: push    0FFFFFFFFh
0x4788E2: push    offset SEH_4788E0
0x4788E7: mov     eax, large fs:0
0x4788ED: push    eax
0x4788EE: sub     esp, 8
0x4788F1: push    ebx
0x4788F2: push    ebp
0x4788F3: push    esi
0x4788F4: push    edi
0x4788F5: mov     eax, ds:0B30AACh
0x4788FA: xor     eax, esp
0x4788FC: push    eax
0x4788FD: lea     eax, [esp+28h+var_C]
0x478901: mov     large fs:0, eax
0x478907: mov     ebx, ecx
0x478909: xor     edi, edi
0x47890B: mov     [esp+28h+var_10], edi
0x47890F: mov     esi, [esp+28h+arg_0]
0x478913: mov     [esi], edi
0x478915: mov     ecx, [ebx+150h]
0x47891B: mov     eax, [ecx]
0x47891D: mov     edx, [eax+170h]
0x478923: push    edi; int
0x478924: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x478929: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x47892E: push    edi; int
0x47892F: mov     [esp+38h+var_4], edi
0x478933: mov     [esp+38h+var_10], 1
0x47893B: call    edx
0x47893D: push    eax; void *
0x47893E: call    OblivionDynamicCast
0x478943: add     esp, 14h
0x478946: cmp     eax, edi
0x478948: jz      loc_478A25
0x47894E: mov     edi, [esp+28h+arg_8]
0x478952: mov     ebp, [esp+28h+arg_4]
0x478956: xor     eax, eax
0x478958: mov     [esp+28h+var_14], eax
0x47895C: lea     esp, [esp+0]
0x478960: lea     ecx, [eax+5]
0x478963: shl     ecx, 4
0x478966: mov     esi, [ecx+ebx]
0x478969: test    esi, esi
0x47896B: jz      loc_478A0B
0x478971: cmp     esi, 0FFFFFFFFh
0x478974: jz      loc_478A0B
0x47897A: cmp     eax, 1
0x47897D: jnz     short loc_4789CA
0x47897F: cmp     byte ptr ds:0B06608h, 0
0x478986: jz      short loc_4789CA
0x478988: cmp     byte ptr ds:0B120B4h, 0
0x47898F: jz      short loc_4789CA
0x478991: call    sub_477ED0
0x478996: test    al, al
0x478998: jz      short loc_4789CA
0x47899A: push    edi
0x47899B: push    ebp
0x47899C: lea     edx, [esp+30h+arg_8]
0x4789A0: push    edx
0x4789A1: mov     ecx, ebx
0x4789A3: call    sub_4781D0
0x4789A8: mov     ecx, [esp+28h+arg_0]
0x4789AC: push    eax
0x4789AD: mov     [esp+2Ch+var_4], 1
0x4789B5: call    sub_4348B0
0x4789BA: lea     ecx, [esp+28h+arg_8]; void *
0x4789BE: mov     byte ptr [esp+28h+var_4], 0
0x4789C3: call    sub_4BDDC0
0x4789C8: jmp     short loc_478A0B
0x4789CA: mov     ecx, ds:0B33A1Ch
0x4789D0: push    0
0x4789D2: push    1
0x4789D4: push    0
0x4789D6: push    3
0x4789D8: push    edi
0x4789D9: push    ebp
0x4789DA: push    esi
0x4789DB: lea     eax, [esp+44h+arg_4]
0x4789DF: push    eax
0x4789E0: call    sub_43B280
0x4789E5: mov     eax, [esp+28h+arg_4]
0x4789E9: test    eax, eax
0x4789EB: jz      short loc_478A0B
0x4789ED: mov     esi, eax
0x4789EF: add     eax, 8
0x4789F2: push    eax; lpAddend
0x4789F3: call    dword ptr ds:0A2807Ch
0x4789F9: test    eax, eax
0x4789FB: jnz     short loc_478A0B
0x4789FD: test    esi, esi
0x4789FF: jz      short loc_478A0B
0x478A01: mov     edx, [esi]
0x478A03: mov     eax, [edx]
0x478A05: push    1
0x478A07: mov     ecx, esi
0x478A09: call    eax
0x478A0B: mov     eax, [esp+28h+var_14]
0x478A0F: add     eax, 1
0x478A12: cmp     eax, 10h
0x478A15: mov     [esp+28h+var_14], eax
0x478A19: jl      loc_478960
0x478A1F: mov     eax, [esp+28h+arg_0]
0x478A23: jmp     short loc_478A27
0x478A25: mov     eax, esi
0x478A27: mov     ecx, [esp+28h+var_C]
0x478A2B: mov     large fs:0, ecx
0x478A32: pop     ecx
0x478A33: pop     edi
0x478A34: pop     esi
0x478A35: pop     ebp
0x478A36: pop     ebx
0x478A37: add     esp, 14h
0x478A3A: retn    0Ch
