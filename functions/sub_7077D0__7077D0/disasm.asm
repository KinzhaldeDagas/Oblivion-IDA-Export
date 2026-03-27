0x7077D0: push    0FFFFFFFFh
0x7077D2: push    offset SEH_7077D0
0x7077D7: mov     eax, large fs:0
0x7077DD: push    eax
0x7077DE: sub     esp, 8
0x7077E1: push    ebx
0x7077E2: push    ebp
0x7077E3: push    esi
0x7077E4: push    edi
0x7077E5: mov     eax, ds:0B30AACh
0x7077EA: xor     eax, esp
0x7077EC: push    eax
0x7077ED: lea     eax, [esp+28h+var_C]
0x7077F1: mov     large fs:0, eax
0x7077F7: mov     esi, ecx
0x7077F9: xor     edi, edi
0x7077FB: mov     [esp+28h+var_10], edi
0x7077FF: cmp     [esi+0A4h], edi
0x707805: jnz     short loc_707826
0x707807: mov     eax, [esp+28h+a2]
0x70780B: cmp     eax, edi
0x70780D: mov     esi, [esp+28h+arg_0]
0x707811: mov     [esi], eax
0x707813: jz      short loc_70781F
0x707815: add     eax, 4
0x707818: push    eax; lpAddend
0x707819: call    dword ptr ds:0A28078h
0x70781F: mov     eax, esi
0x707821: jmp     loc_707966
0x707826: mov     [esp+28h+var_14], edi
0x70782A: mov     ebx, 1
0x70782F: push    offset stru_B3FA00; lpCriticalSection
0x707834: mov     [esp+2Ch+var_4], ebx
0x707838: call    dword ptr ds:0A2806Ch
0x70783E: call    dword ptr ds:0A2808Ch
0x707844: add     ds:0B3FA7Ch, ebx
0x70784A: cmp     byte ptr [esp+28h+arg_8], 0
0x70784F: mov     ds:0B3FA78h, eax
0x707854: jz      short loc_70788A
0x707856: push    30h ; '0'; Size
0x707858: call    FormHeapAlloc
0x70785D: add     esp, 4
0x707860: mov     [esp+28h+arg_8], eax
0x707864: cmp     eax, edi
0x707866: mov     byte ptr [esp+28h+var_4], 2
0x70786B: jz      short loc_707880
0x70786D: mov     ecx, [esp+28h+a2]
0x707871: push    ecx
0x707872: mov     ecx, eax
0x707874: call    sub_731620
0x707879: mov     byte ptr [esp+28h+var_4], bl
0x70787D: push    eax
0x70787E: jmp     short loc_70788F
0x707880: xor     eax, eax
0x707882: mov     byte ptr [esp+28h+var_4], 1
0x707887: push    eax
0x707888: jmp     short loc_70788F
0x70788A: mov     edx, [esp+28h+a2]
0x70788E: push    edx; a2
0x70788F: lea     ecx, [esp+2Ch+var_14]; this
0x707893: call    NiSmartPointer_Set??
0x707898: mov     ebp, [esi+9Ch]
0x70789E: cmp     ebp, edi
0x7078A0: jz      short loc_70790B
0x7078A2: mov     esi, [ebp+8]
0x7078A5: test    esi, esi
0x7078A7: lea     eax, [ebp+8]
0x7078AA: mov     ebp, [ebp+0]
0x7078AD: jz      short loc_707902
0x7078AF: mov     eax, [esi]
0x7078B1: mov     edx, [eax+4Ch]
0x7078B4: mov     ecx, esi
0x7078B6: call    edx
0x7078B8: cmp     eax, 0Ah
0x7078BB: jg      short loc_707902
0x7078BD: mov     eax, [esi]
0x7078BF: mov     edx, [eax+4Ch]
0x7078C2: mov     ecx, esi
0x7078C4: call    edx
0x7078C6: mov     ecx, [esp+28h+var_14]
0x7078CA: mov     edi, [ecx+eax*4+8]
0x7078CE: cmp     edi, esi
0x7078D0: lea     ebx, [ecx+eax*4+8]
0x7078D4: jz      short loc_707902
0x7078D6: test    edi, edi
0x7078D8: jz      short loc_7078F6
0x7078DA: lea     edx, [edi+4]
0x7078DD: push    edx; lpAddend
0x7078DE: call    dword ptr ds:0A2807Ch
0x7078E4: test    eax, eax
0x7078E6: jnz     short loc_7078F6
0x7078E8: test    edi, edi
0x7078EA: jz      short loc_7078F6
0x7078EC: mov     eax, [edi]
0x7078EE: mov     edx, [eax]
0x7078F0: push    1
0x7078F2: mov     ecx, edi
0x7078F4: call    edx
0x7078F6: mov     [ebx], esi
0x7078F8: add     esi, 4
0x7078FB: push    esi; lpAddend
0x7078FC: call    dword ptr ds:0A28078h
0x707902: test    ebp, ebp
0x707904: jnz     short loc_7078A2
0x707906: mov     ebx, 1
0x70790B: sub     ds:0B3FA7Ch, ebx
0x707911: jnz     short loc_70791D
0x707913: mov     dword ptr ds:0B3FA78h, 0
0x70791D: push    offset stru_B3FA00; lpCriticalSection
0x707922: call    dword ptr ds:0A28074h
0x707928: mov     esi, [esp+28h+var_14]
0x70792C: test    esi, esi
0x70792E: mov     edi, [esp+28h+arg_0]
0x707932: mov     [edi], esi
0x707934: jz      short loc_707940
0x707936: lea     eax, [esi+4]
0x707939: push    eax; lpAddend
0x70793A: call    dword ptr ds:0A28078h
0x707940: test    esi, esi
0x707942: mov     [esp+28h+var_10], ebx
0x707946: mov     byte ptr [esp+28h+var_4], 0
0x70794B: jz      short loc_707964
0x70794D: lea     ecx, [esi+4]
0x707950: push    ecx; lpAddend
0x707951: call    dword ptr ds:0A2807Ch
0x707957: test    eax, eax
0x707959: jnz     short loc_707964
0x70795B: mov     edx, [esi]
0x70795D: mov     eax, [edx]
0x70795F: push    ebx
0x707960: mov     ecx, esi
0x707962: call    eax
0x707964: mov     eax, edi
0x707966: mov     ecx, dword ptr [esp+28h+var_C]
0x70796A: mov     large fs:0, ecx
0x707971: pop     ecx
0x707972: pop     edi
0x707973: pop     esi
0x707974: pop     ebp
0x707975: pop     ebx
0x707976: add     esp, 14h
0x707979: retn    0Ch
