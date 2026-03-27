0x7EF870: push    0FFFFFFFFh
0x7EF872: push    offset SEH_8C8970
0x7EF877: mov     eax, large fs:0
0x7EF87D: push    eax
0x7EF87E: push    ecx
0x7EF87F: push    esi
0x7EF880: push    edi
0x7EF881: mov     eax, ds:0B30AACh
0x7EF886: xor     eax, esp
0x7EF888: push    eax
0x7EF889: lea     eax, [esp+1Ch+var_C]
0x7EF88D: mov     large fs:0, eax
0x7EF893: mov     edi, [esp+1Ch+arg_0]
0x7EF897: push    4
0x7EF899: mov     ecx, edi
0x7EF89B: call    NiNode_GetNiPropertyByID
0x7EF8A0: mov     esi, eax
0x7EF8A2: test    esi, esi
0x7EF8A4: jz      short loc_7EF8F3
0x7EF8A6: mov     eax, [esi]
0x7EF8A8: mov     edx, [eax+54h]
0x7EF8AB: mov     ecx, esi
0x7EF8AD: call    edx
0x7EF8AF: xor     ecx, ecx
0x7EF8B1: cmp     eax, 0Fh
0x7EF8B4: setz    cl
0x7EF8B7: mov     eax, ecx
0x7EF8B9: test    eax, eax
0x7EF8BB: jnz     loc_7EF959
0x7EF8C1: push    4
0x7EF8C3: lea     edx, [esp+20h+arg_0]
0x7EF8C7: push    edx
0x7EF8C8: mov     ecx, edi
0x7EF8CA: call    sub_708560
0x7EF8CF: mov     esi, [esp+1Ch+arg_0]
0x7EF8D3: test    esi, esi
0x7EF8D5: jz      short loc_7EF8F3
0x7EF8D7: lea     eax, [esi+4]
0x7EF8DA: push    eax; lpAddend
0x7EF8DB: call    dword ptr ds:0A2807Ch
0x7EF8E1: test    eax, eax
0x7EF8E3: jnz     short loc_7EF8F3
0x7EF8E5: test    esi, esi
0x7EF8E7: jz      short loc_7EF8F3
0x7EF8E9: mov     edx, [esi]
0x7EF8EB: mov     eax, [edx]
0x7EF8ED: push    1
0x7EF8EF: mov     ecx, esi
0x7EF8F1: call    eax
0x7EF8F3: push    0ACh ; '¬'; Size
0x7EF8F8: call    FormHeapAlloc
0x7EF8FD: add     esp, 4
0x7EF900: mov     [esp+1Ch+var_10], eax
0x7EF904: test    eax, eax
0x7EF906: mov     [esp+1Ch+var_4], 0
0x7EF90E: jz      short loc_7EF91B
0x7EF910: mov     ecx, eax
0x7EF912: call    sub_7EFA10
0x7EF917: mov     esi, eax
0x7EF919: jmp     short loc_7EF91D
0x7EF91B: xor     esi, esi
0x7EF91D: push    esi; a2
0x7EF91E: mov     ecx, edi; this
0x7EF920: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7EF928: call    sub_405680
0x7EF92D: mov     edx, [esi]
0x7EF92F: mov     eax, [edx+58h]
0x7EF932: push    edi
0x7EF933: mov     ecx, esi
0x7EF935: call    eax
0x7EF937: test    al, al
0x7EF939: jnz     short loc_7EF963
0x7EF93B: push    esi
0x7EF93C: mov     ecx, edi
0x7EF93E: call    sub_4A1220
0x7EF943: xor     al, al
0x7EF945: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7EF949: mov     large fs:0, ecx
0x7EF950: pop     ecx
0x7EF951: pop     edi
0x7EF952: pop     esi
0x7EF953: add     esp, 10h
0x7EF956: retn    4
0x7EF959: mov     edx, [esi]
0x7EF95B: mov     eax, [edx+58h]
0x7EF95E: push    edi
0x7EF95F: mov     ecx, esi
0x7EF961: call    eax
0x7EF963: mov     al, 1
0x7EF965: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7EF969: mov     large fs:0, ecx
0x7EF970: pop     ecx
0x7EF971: pop     edi
0x7EF972: pop     esi
0x7EF973: add     esp, 10h
0x7EF976: retn    4
