0x897040: push    ebp
0x897041: mov     ebp, esp
0x897043: and     esp, 0FFFFFFF0h
0x897046: push    0FFFFFFFFh
0x897048: push    offset SEH_897040
0x89704D: mov     eax, large fs:0
0x897053: push    eax
0x897054: sub     esp, 68h
0x897057: push    ebx
0x897058: push    esi
0x897059: push    edi
0x89705A: mov     eax, ds:0B30AACh
0x89705F: xor     eax, esp
0x897061: push    eax
0x897062: lea     eax, [esp+84h+var_C]
0x897066: mov     large fs:0, eax
0x89706C: mov     edi, ecx
0x89706E: mov     esi, [ebp+arg_0]
0x897071: xor     ebx, ebx
0x897073: cmp     esi, ebx
0x897075: jz      loc_89721A
0x89707B: fld     dword ptr [esi+98h]
0x897081: push    esi
0x897082: fmul    dword ptr [esi+94h]
0x897088: fstp    [esp+88h+var_74]
0x89708C: fld     [esp+88h+var_74]
0x897090: fstp    dword ptr [edi+248h]
0x897096: call    sub_895190
0x89709B: lea     ecx, [esp+84h+var_70]
0x89709F: call    sub_532250
0x8970A4: mov     eax, [esi+74h]
0x8970A7: mov     ecx, edi
0x8970A9: mov     [esp+84h+var_4], ebx
0x8970B0: mov     [esp+84h+var_70], eax
0x8970B4: call    sub_890BA0
0x8970B9: cmp     eax, ebx
0x8970BB: jz      short loc_8970C6
0x8970BD: mov     ecx, [eax+8]
0x8970C0: mov     [esp+84h+var_6C], ecx
0x8970C4: jmp     short loc_8970CA
0x8970C6: mov     [esp+84h+var_6C], ebx
0x8970CA: push    14h; Size
0x8970CC: call    FormHeapAlloc
0x8970D1: add     esp, 4
0x8970D4: mov     [esp+84h+var_74], eax
0x8970D8: cmp     eax, ebx
0x8970DA: mov     byte ptr [esp+84h+var_4], 1
0x8970E2: jz      short loc_8970F2
0x8970E4: lea     edx, [esp+84h+var_70]
0x8970E8: push    edx
0x8970E9: mov     ecx, eax
0x8970EB: call    sub_531FC0
0x8970F0: jmp     short loc_8970F4
0x8970F2: xor     eax, eax
0x8970F4: lea     ebx, [edi+364h]
0x8970FA: push    eax; a2
0x8970FB: mov     ecx, ebx; this
0x8970FD: mov     byte ptr [esp+88h+var_4], 0
0x897105: call    NiSmartPointer_Set??
0x89710A: mov     eax, [esi+78h]
0x89710D: test    eax, eax
0x89710F: jz      short loc_897175
0x897111: mov     ecx, [ebx]
0x897113: test    ecx, ecx
0x897115: jz      short loc_897160
0x897117: mov     edx, [ecx]
0x897119: push    eax
0x89711A: mov     eax, [edx+5Ch]
0x89711D: call    eax
0x89711F: mov     ecx, [ebx]
0x897121: push    19h
0x897123: push    0
0x897125: push    96h ; '–'
0x89712A: push    96h ; '–'
0x89712F: mov     [esp+94h+var_74], ecx
0x897133: call    sub_8AEB80
0x897138: mov     edx, [esp+94h+var_74]
0x89713C: mov     ecx, [esi+78h]
0x89713F: add     esp, 10h
0x897142: push    eax
0x897143: push    edx
0x897144: call    sub_88BB60
0x897149: mov     eax, [esi+78h]
0x89714C: cmp     byte ptr [eax+1Ah], 0
0x897150: jz      short loc_897160
0x897152: mov     edx, [edi]
0x897154: mov     eax, [edx+88h]
0x89715A: push    0
0x89715C: mov     ecx, edi
0x89715E: call    eax
0x897160: mov     ecx, [edi+368h]
0x897166: test    ecx, ecx
0x897168: jz      short loc_897175
0x89716A: mov     edx, [ecx]
0x89716C: mov     eax, [esi+78h]
0x89716F: mov     edx, [edx+5Ch]
0x897172: push    eax
0x897173: call    edx
0x897175: mov     eax, [esi+88h]
0x89717B: mov     ebx, [ebx]
0x89717D: test    ebx, ebx
0x89717F: mov     [edi+2A0h], eax
0x897185: fld     dword ptr [esi+7Ch]
0x897188: fstp    dword ptr [edi+310h]
0x89718E: fld     dword ptr [esi+80h]
0x897194: fstp    dword ptr [edi+328h]
0x89719A: mov     eax, [esi+0A0h]
0x8971A0: mov     [edi+3B0h], eax
0x8971A6: jz      short loc_8971AD
0x8971A8: mov     ebx, [ebx+8]
0x8971AB: jmp     short loc_8971AF
0x8971AD: xor     ebx, ebx
0x8971AF: push    esi
0x8971B0: mov     ecx, edi
0x8971B2: mov     [esi+48h], ebx
0x8971B5: call    sub_8B9E50
0x8971BA: lea     eax, [edi+1F0h]
0x8971C0: mov     edi, [edi+8]
0x8971C3: test    edi, edi
0x8971C5: jz      short loc_8971CF
0x8971C7: push    eax
0x8971C8: mov     ecx, edi
0x8971CA: call    sub_8ACD60
0x8971CF: mov     eax, [esp+84h+var_5C]
0x8971D3: test    eax, eax
0x8971D5: mov     [esp+84h+var_4], 0FFFFFFFFh
0x8971E0: js      short loc_89721A
0x8971E2: mov     ecx, ds:0BA9DE4h
0x8971E8: mov     edx, large fs:2Ch
0x8971EF: mov     ecx, [edx+ecx*4]
0x8971F2: mov     ecx, [ecx+19Ch]
0x8971F8: test    ecx, ecx
0x8971FA: jnz     short loc_897202
0x8971FC: mov     ecx, ds:0BA7D9Ch
0x897202: mov     edx, [esp+84h+var_64]
0x897206: and     eax, 3FFFFFFFh
0x89720B: add     eax, eax
0x89720D: add     eax, eax
0x89720F: push    14h
0x897211: add     eax, eax
0x897213: push    eax
0x897214: push    edx
0x897215: call    sub_8A75D0
0x89721A: mov     ecx, dword ptr [esp+84h+var_C]
0x89721E: mov     large fs:0, ecx
0x897225: pop     ecx
0x897226: pop     edi
0x897227: pop     esi
0x897228: pop     ebx
0x897229: mov     esp, ebp
0x89722B: pop     ebp
0x89722C: retn    4
