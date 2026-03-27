0x47B7D0: push    0FFFFFFFFh
0x47B7D2: push    offset SEH_47B7D0
0x47B7D7: mov     eax, large fs:0
0x47B7DD: push    eax
0x47B7DE: sub     esp, 54h
0x47B7E1: push    ebx
0x47B7E2: push    ebp
0x47B7E3: push    esi
0x47B7E4: push    edi
0x47B7E5: mov     eax, ds:0B30AACh
0x47B7EA: xor     eax, esp
0x47B7EC: push    eax
0x47B7ED: lea     eax, [esp+74h+var_C]
0x47B7F1: mov     large fs:0, eax
0x47B7F7: mov     ebp, ecx
0x47B7F9: mov     edi, [esp+74h+arg_0]
0x47B7FD: test    edi, edi
0x47B7FF: jz      loc_47B963
0x47B805: mov     esi, [esp+74h+arg_4]
0x47B809: test    esi, esi
0x47B80B: jz      loc_47B963
0x47B811: mov     ecx, ds:0B333C4h
0x47B817: cmp     [ebp+150h], ecx
0x47B81D: mov     eax, ds:0B065CCh
0x47B822: mov     [esp+74h+var_60], eax
0x47B826: mov     byte ptr [esp+74h+arg_0], 0
0x47B82B: jnz     short loc_47B83C
0x47B82D: push    ebp
0x47B82E: call    sub_65D770
0x47B833: test    al, al
0x47B835: jz      short loc_47B83C
0x47B837: mov     byte ptr [esp+74h+arg_0], 1
0x47B83C: mov     ecx, [esp+74h+arg_0]
0x47B840: push    edi
0x47B841: push    ecx
0x47B842: push    1
0x47B844: push    esi
0x47B845: mov     ecx, ebp
0x47B847: call    sub_47B5B0
0x47B84C: mov     ebx, eax
0x47B84E: xor     eax, eax
0x47B850: cmp     ebx, eax
0x47B852: jnz     short loc_47B86A
0x47B854: mov     edx, [ebp+0]
0x47B857: push    edi
0x47B858: push    1
0x47B85A: push    ebp
0x47B85B: push    eax
0x47B85C: push    esi
0x47B85D: push    edx
0x47B85E: mov     ebx, esi
0x47B860: call    sub_479140
0x47B865: add     esp, 18h
0x47B868: xor     eax, eax
0x47B86A: mov     [esp+74h+Src], eax
0x47B86E: mov     [esp+74h+var_58], ax
0x47B873: mov     [esp+74h+var_56], ax
0x47B878: mov     ecx, [ebp+5Ch]
0x47B87B: mov     [esp+74h+var_4], eax
0x47B87F: mov     eax, [ecx+0Ch]
0x47B882: push    eax
0x47B883: mov     eax, [ecx]
0x47B885: mov     edx, [eax+0D4h]
0x47B88B: call    edx
0x47B88D: push    eax
0x47B88E: mov     eax, ds:0B0658Ch
0x47B893: push    eax; ArgList
0x47B894: lea     ecx, [esp+80h+Src]
0x47B898: push    offset aSS08x; "%s %s (%08X)"
0x47B89D: push    ecx; int
0x47B89E: call    BSStringT_Static_Format
0x47B8A3: mov     edx, [esp+88h+Src]
0x47B8A7: add     esp, 14h
0x47B8AA: push    edx; Src
0x47B8AB: mov     ecx, ebx
0x47B8AD: call    NiObjectNET_SetName
0x47B8B2: cmp     byte ptr [ebp+68h], 0
0x47B8B6: jz      short loc_47B8ED
0x47B8B8: push    1
0x47B8BA: lea     esi, [ebx+30h]
0x47B8BD: mov     ecx, 9
0x47B8C2: lea     edi, [esp+78h+var_54]
0x47B8C6: rep movsd
0x47B8C8: lea     eax, [esp+78h+var_54]
0x47B8CC: push    eax
0x47B8CD: lea     ecx, [esp+7Ch+var_30]
0x47B8D1: push    ecx
0x47B8D2: mov     ecx, [ebp+150h]
0x47B8D8: call    sub_4D7C50
0x47B8DD: mov     ecx, 9
0x47B8E2: mov     esi, eax
0x47B8E4: lea     edi, [ebx+30h]
0x47B8E7: rep movsd
0x47B8E9: mov     esi, [esp+74h+arg_4]
0x47B8ED: push    offset dword_A7D0EC
0x47B8F2: mov     ecx, esi
0x47B8F4: call    NiObjectNET_GetExtraData
0x47B8F9: test    eax, eax
0x47B8FB: jz      short loc_47B911
0x47B8FD: mov     edx, [eax+0Ch]
0x47B900: shr     edx, 4
0x47B903: test    dl, 1
0x47B906: jz      short loc_47B911
0x47B908: push    esi
0x47B909: call    sub_4E26F0
0x47B90E: add     esp, 4
0x47B911: cmp     byte ptr [ebp+68h], 0
0x47B915: jnz     short loc_47B94B
0x47B917: mov     eax, [ebx]
0x47B919: mov     edx, [eax+8]
0x47B91C: mov     ecx, ebx
0x47B91E: call    edx
0x47B920: test    eax, eax
0x47B922: jz      short loc_47B94B
0x47B924: mov     eax, [esp+74h+var_60]
0x47B928: cmp     dword ptr [ebp+eax*8+8], 0
0x47B92D: jz      short loc_47B935
0x47B92F: mov     ecx, [ebp+eax*8+8]
0x47B933: jmp     short loc_47B93E
0x47B935: cmp     dword ptr [ebx+1Ch], 0
0x47B939: jz      short loc_47B94B
0x47B93B: mov     ecx, [ebp+0]
0x47B93E: mov     eax, [ecx]
0x47B940: mov     edx, [eax+84h]
0x47B946: push    1
0x47B948: push    ebx
0x47B949: call    edx
0x47B94B: mov     eax, [esp+74h+Src]
0x47B94F: push    eax
0x47B950: mov     [ebp+64h], ebx
0x47B953: mov     [esp+78h+var_4], 0FFFFFFFFh
0x47B95B: call    FormHeapFree
0x47B960: add     esp, 4
0x47B963: mov     eax, [ebp+150h]
0x47B969: test    eax, eax
0x47B96B: jz      short loc_47B989
0x47B96D: mov     eax, [eax+3Ch]
0x47B970: test    eax, eax
0x47B972: jz      short loc_47B989
0x47B974: mov     ecx, eax; this
0x47B976: call    NiAVObject_InitializePropertyState
0x47B97B: mov     ecx, [ebp+150h]
0x47B981: mov     ecx, [ecx+3Ch]
0x47B984: call    NiNode_UpdateDynamicEffectState
0x47B989: mov     ecx, [esp+74h+var_C]
0x47B98D: mov     large fs:0, ecx
0x47B994: pop     ecx
0x47B995: pop     edi
0x47B996: pop     esi
0x47B997: pop     ebp
0x47B998: pop     ebx
0x47B999: add     esp, 60h
0x47B99C: retn    8
