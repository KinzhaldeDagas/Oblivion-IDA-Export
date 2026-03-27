0x904300: push    ebp
0x904301: mov     ebp, esp
0x904303: and     esp, 0FFFFFFF0h
0x904306: sub     esp, 64h
0x904309: push    ebx
0x90430A: mov     ebx, large fs:2Ch
0x904311: mov     [esp+68h+var_54], ecx
0x904315: mov     ecx, ds:0BA9DE4h
0x90431B: mov     eax, [ebx+ecx*4]
0x90431E: mov     edx, [eax+1A4h]
0x904324: push    esi
0x904325: cmp     edx, [eax+1A8h]
0x90432B: push    edi
0x90432C: jnb     short loc_904352
0x90432E: mov     esi, eax
0x904330: mov     ecx, [esi+1A4h]
0x904336: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x90433C: rdtsc
0x90433E: mov     [esp+70h+var_58], eax
0x904342: mov     eax, [esp+70h+var_58]
0x904346: mov     [ecx+4], eax
0x904349: add     ecx, 0Ch
0x90434C: mov     [esi+1A4h], ecx
0x904352: mov     esi, [ebp+arg_0]
0x904355: mov     edi, [esi]
0x904357: mov     edx, [esi+8]
0x90435A: lea     ecx, [edi+20h]
0x90435D: push    ecx
0x90435E: push    edx
0x90435F: lea     ecx, [esp+78h+var_40]
0x904363: call    sub_8B1F70
0x904368: mov     edx, [esp+70h+var_54]
0x90436C: mov     [esp+70h+var_44], esi
0x904370: lea     eax, [esp+70h+var_40]
0x904374: mov     [esp+70h+var_48], eax
0x904378: mov     ecx, [esi+4]
0x90437B: mov     edi, [edi+0Ch]
0x90437E: mov     [esp+70h+var_4C], ecx
0x904382: mov     ecx, [edx+0Ch]
0x904385: mov     edx, [ebp+arg_10]
0x904388: push    edx
0x904389: mov     edx, [ebp+arg_C]
0x90438C: push    edx
0x90438D: mov     edx, [ebp+arg_8]
0x904390: push    edx
0x904391: mov     edx, [ebp+arg_4]
0x904394: push    edx
0x904395: lea     edx, [esp+80h+var_50]
0x904399: mov     [esp+80h+var_50], edi
0x90439D: mov     eax, [ecx]
0x90439F: push    edx
0x9043A0: call    dword ptr [eax+10h]
0x9043A3: mov     ecx, ds:0BA9DE4h
0x9043A9: mov     eax, [ebx+ecx*4]
0x9043AC: mov     edx, [eax+1A4h]
0x9043B2: cmp     edx, [eax+1A8h]
0x9043B8: jnb     short loc_9043DE
0x9043BA: mov     ebx, eax
0x9043BC: mov     ecx, [ebx+1A4h]
0x9043C2: mov     dword ptr [ecx], offset aEt; "Et"
0x9043C8: rdtsc
0x9043CA: mov     [esp+70h+var_54], eax
0x9043CE: mov     eax, [esp+70h+var_54]
0x9043D2: mov     [ecx+4], eax
0x9043D5: add     ecx, 0Ch
0x9043D8: mov     [ebx+1A4h], ecx
0x9043DE: pop     edi
0x9043DF: pop     esi
0x9043E0: pop     ebx
0x9043E1: mov     esp, ebp
0x9043E3: pop     ebp
0x9043E4: retn    14h
