0x6F3110: sub     esp, 8
0x6F3113: mov     edx, [esp+8+arg_8]
0x6F3117: push    ebx
0x6F3118: mov     ebx, [esp+0Ch+arg_0]
0x6F311C: push    esi
0x6F311D: mov     esi, [esp+10h+arg_4]
0x6F3121: push    edi
0x6F3122: mov     edi, [esp+14h+arg_8]
0x6F3126: xor     al, al
0x6F3128: mov     byte ptr [esp+14h+var_4], al
0x6F312C: mov     ecx, [esp+14h+var_4]
0x6F3130: mov     byte ptr [esp+14h+var_8], al
0x6F3134: mov     eax, [esp+14h+var_8]
0x6F3138: push    eax
0x6F3139: push    ecx
0x6F313A: push    edx
0x6F313B: push    edi
0x6F313C: push    esi
0x6F313D: push    ebx
0x6F313E: call    sub_6F28E0
0x6F3143: sub     esi, ebx
0x6F3145: mov     eax, 2E8BA2E9h
0x6F314A: imul    esi
0x6F314C: sar     edx, 3
0x6F314F: mov     eax, edx
0x6F3151: shr     eax, 1Fh
0x6F3154: add     eax, edx
0x6F3156: imul    eax, 2Ch ; ','
0x6F3159: add     esp, 18h
0x6F315C: add     eax, edi
0x6F315E: pop     edi
0x6F315F: pop     esi
0x6F3160: pop     ebx
0x6F3161: add     esp, 8
0x6F3164: retn
