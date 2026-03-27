0x9044F0: push    ebp
0x9044F1: mov     ebp, esp
0x9044F3: and     esp, 0FFFFFFF0h
0x9044F6: sub     esp, 64h
0x9044F9: push    ebx
0x9044FA: mov     ebx, large fs:2Ch
0x904501: mov     [esp+68h+var_54], ecx
0x904505: mov     ecx, ds:0BA9DE4h
0x90450B: mov     eax, [ebx+ecx*4]
0x90450E: mov     edx, [eax+1A4h]
0x904514: push    esi
0x904515: cmp     edx, [eax+1A8h]
0x90451B: push    edi
0x90451C: jnb     short loc_904542
0x90451E: mov     esi, eax
0x904520: mov     ecx, [esi+1A4h]
0x904526: mov     dword ptr [ecx], offset aTttransform; "TtTransform"
0x90452C: rdtsc
0x90452E: mov     [esp+70h+var_58], eax
0x904532: mov     eax, [esp+70h+var_58]
0x904536: mov     [ecx+4], eax
0x904539: add     ecx, 0Ch
0x90453C: mov     [esi+1A4h], ecx
0x904542: mov     esi, [ebp+arg_0]
0x904545: mov     edi, [esi]
0x904547: mov     edx, [esi+8]
0x90454A: lea     ecx, [edi+20h]
0x90454D: push    ecx
0x90454E: push    edx
0x90454F: lea     ecx, [esp+78h+var_40]
0x904553: call    sub_8B1F70
0x904558: mov     edx, [esp+70h+var_54]
0x90455C: mov     [esp+70h+var_44], esi
0x904560: lea     eax, [esp+70h+var_40]
0x904564: mov     [esp+70h+var_48], eax
0x904568: mov     ecx, [esi+4]
0x90456B: mov     edi, [edi+0Ch]
0x90456E: mov     [esp+70h+var_4C], ecx
0x904572: mov     ecx, [edx+0Ch]
0x904575: mov     edx, [ebp+arg_C]
0x904578: push    edx
0x904579: mov     edx, [ebp+arg_8]
0x90457C: push    edx
0x90457D: mov     edx, [ebp+arg_4]
0x904580: push    edx
0x904581: lea     edx, [esp+7Ch+var_50]
0x904585: mov     [esp+7Ch+var_50], edi
0x904589: mov     eax, [ecx]
0x90458B: push    edx
0x90458C: call    dword ptr [eax+0Ch]
0x90458F: mov     ecx, ds:0BA9DE4h
0x904595: mov     eax, [ebx+ecx*4]
0x904598: mov     edx, [eax+1A4h]
0x90459E: cmp     edx, [eax+1A8h]
0x9045A4: jnb     short loc_9045CA
0x9045A6: mov     ebx, eax
0x9045A8: mov     ecx, [ebx+1A4h]
0x9045AE: mov     dword ptr [ecx], offset aEt; "Et"
0x9045B4: rdtsc
0x9045B6: mov     [esp+70h+var_54], eax
0x9045BA: mov     eax, [esp+70h+var_54]
0x9045BE: mov     [ecx+4], eax
0x9045C1: add     ecx, 0Ch
0x9045C4: mov     [ebx+1A4h], ecx
0x9045CA: pop     edi
0x9045CB: pop     esi
0x9045CC: pop     ebx
0x9045CD: mov     esp, ebp
0x9045CF: pop     ebp
0x9045D0: retn    10h
