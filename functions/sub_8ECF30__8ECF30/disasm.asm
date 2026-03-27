0x8ECF30: sub     esp, 0Ch
0x8ECF33: push    esi
0x8ECF34: mov     esi, ecx
0x8ECF36: mov     ecx, [esp+10h+arg_0]
0x8ECF3A: cmp     dword ptr [ecx], 0
0x8ECF3D: push    edi
0x8ECF3E: jz      short loc_8ECF88
0x8ECF40: mov     edi, [esi+124h]
0x8ECF46: dec     edi
0x8ECF47: js      short loc_8ECF5E
0x8ECF49: mov     eax, [esi+120h]
0x8ECF4F: lea     eax, [eax+edi*4]
0x8ECF52: cmp     [eax], ecx
0x8ECF54: jz      short loc_8ECF90
0x8ECF56: dec     edi
0x8ECF57: sub     eax, 4
0x8ECF5A: test    edi, edi
0x8ECF5C: jge     short loc_8ECF52
0x8ECF5E: mov     edi, [esi+54h]
0x8ECF61: dec     edi
0x8ECF62: mov     [esp+14h+var_8], ecx
0x8ECF66: mov     [esp+14h+var_C], esi
0x8ECF6A: mov     [esp+14h+var_4], 0
0x8ECF6F: js      short loc_8ECF88
0x8ECF71: mov     edx, [esi+50h]
0x8ECF74: mov     ecx, [edx+edi*4]
0x8ECF77: test    ecx, ecx
0x8ECF79: jz      short loc_8ECF85
0x8ECF7B: mov     eax, [ecx]
0x8ECF7D: lea     edx, [esp+14h+var_C]
0x8ECF81: push    edx
0x8ECF82: call    dword ptr [eax+4]
0x8ECF85: dec     edi
0x8ECF86: jns     short loc_8ECF71
0x8ECF88: pop     edi
0x8ECF89: pop     esi
0x8ECF8A: add     esp, 0Ch
0x8ECF8D: retn    4
0x8ECF90: push    ecx
0x8ECF91: mov     eax, esp
0x8ECF93: push    ecx
0x8ECF94: mov     ecx, esi
0x8ECF96: mov     byte ptr [eax], 1
0x8ECF99: call    sub_88D7D0
0x8ECF9E: mov     eax, [esi+124h]
0x8ECFA4: dec     eax
0x8ECFA5: mov     [esi+124h], eax
0x8ECFAB: mov     esi, [esi+120h]
0x8ECFB1: mov     ecx, [esi+eax*4]
0x8ECFB4: mov     [esi+edi*4], ecx
0x8ECFB7: pop     edi
0x8ECFB8: pop     esi
0x8ECFB9: add     esp, 0Ch
0x8ECFBC: retn    4
