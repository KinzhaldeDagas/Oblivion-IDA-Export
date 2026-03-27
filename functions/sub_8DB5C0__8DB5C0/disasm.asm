0x8DB5C0: sub     esp, 28h
0x8DB5C3: push    ebx
0x8DB5C4: push    ebp
0x8DB5C5: mov     ebp, ecx
0x8DB5C7: mov     ecx, [esp+30h+arg_0]
0x8DB5CB: mov     edx, [ecx+0Ch]
0x8DB5CE: test    edx, edx
0x8DB5D0: push    esi
0x8DB5D1: push    edi
0x8DB5D2: mov     eax, ecx
0x8DB5D4: jz      short loc_8DB5DF
0x8DB5D6: mov     eax, edx
0x8DB5D8: mov     edx, [eax+0Ch]
0x8DB5DB: test    edx, edx
0x8DB5DD: jnz     short loc_8DB5D6
0x8DB5DF: mov     ebx, [esp+38h+arg_4]
0x8DB5E3: mov     edi, [eax+10h]
0x8DB5E6: mov     edx, [ebx+0Ch]
0x8DB5E9: add     edi, eax
0x8DB5EB: test    edx, edx
0x8DB5ED: mov     eax, ebx
0x8DB5EF: jz      short loc_8DB5FA
0x8DB5F1: mov     eax, edx
0x8DB5F3: mov     edx, [eax+0Ch]
0x8DB5F6: test    edx, edx
0x8DB5F8: jnz     short loc_8DB5F1
0x8DB5FA: mov     esi, [eax+10h]
0x8DB5FD: fld     dword ptr [esi+eax+5Ch]
0x8DB601: add     esi, eax
0x8DB603: fmul    dword ptr [edi+5Ch]
0x8DB606: fsqrt
0x8DB608: fmul    dword ptr ds:0A3F458h
0x8DB60E: fstp    [esp+38h+arg_0]
0x8DB612: fld     [esp+38h+arg_0]
0x8DB616: fistp   [esp+38h+arg_4]
0x8DB61A: mov     eax, [esp+38h+arg_18]
0x8DB61E: mov     dx, word ptr [esp+38h+arg_4]
0x8DB623: mov     [eax+4], dx
0x8DB627: fld     dword ptr [esi+60h]
0x8DB62A: fmul    dword ptr [edi+60h]
0x8DB62D: fsqrt
0x8DB62F: fmul    dword ptr ds:0A2FFE8h
0x8DB635: fstp    [esp+38h+arg_0]
0x8DB639: fld     [esp+38h+arg_0]
0x8DB63D: fistp   [esp+38h+arg_4]
0x8DB641: mov     dl, byte ptr [esp+38h+arg_4]
0x8DB645: mov     [eax+6], dl
0x8DB648: mov     edx, [esp+38h+arg_C]
0x8DB64C: mov     [esp+38h+var_14], eax
0x8DB650: mov     eax, [esp+38h+arg_14]
0x8DB654: mov     [esp+38h+var_28], ecx
0x8DB658: xor     ecx, ecx
0x8DB65A: mov     [esp+38h+var_18], edx
0x8DB65E: lea     edx, [esp+38h+var_28]
0x8DB662: mov     [esp+38h+var_10], eax
0x8DB666: mov     eax, [ebp+8]
0x8DB669: mov     [esp+38h+var_20], ecx
0x8DB66D: mov     [esp+38h+var_C], ecx
0x8DB671: mov     ecx, [esp+38h+arg_10]
0x8DB675: push    edx
0x8DB676: push    eax
0x8DB677: mov     [esp+40h+var_24], ebx
0x8DB67B: mov     [esp+40h+var_8], ebp
0x8DB67F: mov     [esp+40h+var_4], ecx
0x8DB683: call    sub_8DC800
0x8DB688: mov     eax, [edi+98h]
0x8DB68E: add     esp, 8
0x8DB691: test    eax, eax
0x8DB693: jz      short loc_8DB6A3
0x8DB695: lea     ecx, [esp+38h+var_28]
0x8DB699: push    ecx
0x8DB69A: push    edi
0x8DB69B: call    sub_8DBF80
0x8DB6A0: add     esp, 8
0x8DB6A3: mov     eax, [esi+98h]
0x8DB6A9: test    eax, eax
0x8DB6AB: jz      short loc_8DB6BB
0x8DB6AD: lea     edx, [esp+38h+var_28]
0x8DB6B1: push    edx
0x8DB6B2: push    esi
0x8DB6B3: call    sub_8DBF80
0x8DB6B8: add     esp, 8
0x8DB6BB: mov     eax, [esp+38h+var_C]
0x8DB6BF: pop     edi
0x8DB6C0: pop     esi
0x8DB6C1: pop     ebp
0x8DB6C2: pop     ebx
0x8DB6C3: add     esp, 28h
0x8DB6C6: retn    1Ch
