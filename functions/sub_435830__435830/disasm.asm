0x435830: sub     esp, 10Ch
0x435836: mov     eax, ___security_cookie
0x43583B: xor     eax, esp
0x43583D: mov     [esp+10Ch+var_4], eax
0x435844: mov     ecx, g_idleAnimationMap
0x43584A: test    ecx, ecx
0x43584C: push    ebp
0x43584D: mov     ebp, [esp+110h+arg_0]
0x435854: push    esi
0x435855: push    edi
0x435856: jz      loc_435927
0x43585C: push    ebp
0x43585D: call    sub_521190
0x435862: test    eax, eax
0x435864: jz      loc_435927
0x43586A: mov     ecx, g_idleAnimationMap
0x435870: push    ebp
0x435871: call    sub_521190
0x435876: mov     esi, eax
0x435878: push    8; Size
0x43587A: mov     [esp+11Ch+var_10C], esi
0x43587E: call    FormHeapAlloc
0x435883: add     esp, 4
0x435886: test    eax, eax
0x435888: jz      short loc_43589B
0x43588A: mov     dword ptr [eax], 0
0x435890: mov     dword ptr [eax+4], 0
0x435897: mov     ebp, eax
0x435899: jmp     short loc_43589D
0x43589B: xor     ebp, ebp
0x43589D: test    esi, esi
0x43589F: jz      loc_435920
0x4358A5: jmp     short loc_4358AB
0x4358A7: mov     esi, [esp+118h+var_10C]
0x4358AB: mov     esi, [esi]
0x4358AD: mov     eax, esi
0x4358AF: lea     edx, [eax+1]
0x4358B2: mov     cl, [eax]
0x4358B4: add     eax, 1
0x4358B7: test    cl, cl
0x4358B9: jnz     short loc_4358B2
0x4358BB: sub     eax, edx
0x4358BD: add     eax, 1
0x4358C0: push    eax; Size
0x4358C1: call    FormHeapAlloc
0x4358C6: mov     edi, eax
0x4358C8: mov     edx, edi
0x4358CA: add     esp, 4
0x4358CD: mov     eax, esi
0x4358CF: sub     edx, esi
0x4358D1: mov     cl, [eax]
0x4358D3: mov     [edx+eax], cl
0x4358D6: add     eax, 1
0x4358D9: test    cl, cl
0x4358DB: jnz     short loc_4358D1
0x4358DD: test    edi, edi
0x4358DF: jz      short loc_435911
0x4358E1: cmp     dword ptr [ebp+0], 0
0x4358E5: jz      short loc_43590E
0x4358E7: push    8; Size
0x4358E9: call    FormHeapAlloc
0x4358EE: add     esp, 4
0x4358F1: test    eax, eax
0x4358F3: jz      short loc_435903
0x4358F5: mov     ecx, [ebp+0]
0x4358F8: mov     [eax], ecx
0x4358FA: mov     dword ptr [eax+4], 0
0x435901: jmp     short loc_435905
0x435903: xor     eax, eax
0x435905: mov     edx, [ebp+4]
0x435908: mov     [eax+4], edx
0x43590B: mov     [ebp+4], eax
0x43590E: mov     [ebp+0], edi
0x435911: mov     eax, [esp+118h+var_10C]
0x435915: mov     eax, [eax+4]
0x435918: test    eax, eax
0x43591A: mov     [esp+118h+var_10C], eax
0x43591E: jnz     short loc_4358A7
0x435920: mov     eax, ebp
0x435922: jmp     loc_4359B6
0x435927: mov     ecx, ds:dword_A366D4
0x43592D: mov     eax, ds:dword_A366DC
0x435932: mov     edx, ds:dword_A366D8
0x435938: mov     dword ptr [esp+118h+Str], ecx
0x43593C: mov     cl, ds:byte_A366E0
0x435942: mov     [esp+118h+var_100], eax
0x435946: mov     eax, ebp
0x435948: mov     [esp+118h+var_104], edx
0x43594C: mov     [esp+118h+var_FC], cl
0x435950: mov     edx, eax
0x435952: mov     cl, [eax]
0x435954: add     eax, 1
0x435957: test    cl, cl
0x435959: jnz     short loc_435952
0x43595B: lea     edi, [esp+118h+Str]
0x43595F: sub     eax, edx
0x435961: add     edi, 0FFFFFFFFh
0x435964: mov     cl, [edi+1]
0x435967: add     edi, 1
0x43596A: test    cl, cl
0x43596C: jnz     short loc_435964
0x43596E: mov     ecx, eax
0x435970: shr     ecx, 2
0x435973: mov     esi, edx
0x435975: rep movsd
0x435977: mov     ecx, eax
0x435979: lea     edx, [esp+118h+Str]
0x43597D: and     ecx, 3
0x435980: push    5Ch ; '\'; Ch
0x435982: push    edx; Str
0x435983: rep movsb
0x435985: call    _strrchr
0x43598A: add     esp, 8
0x43598D: test    eax, eax
0x43598F: jz      short loc_4359B6
0x435991: mov     ecx, ds:dword_A368F8
0x435997: mov     [eax], ecx
0x435999: mov     dx, ds:word_A368FC
0x4359A0: push    0; int
0x4359A2: push    1; int
0x4359A4: mov     [eax+4], dx
0x4359A8: lea     eax, [esp+120h+Str]
0x4359AC: push    ebp; char *
0x4359AD: push    eax; Str
0x4359AE: call    sub_431970
0x4359B3: add     esp, 10h
0x4359B6: mov     ecx, [esp+118h+var_4]
0x4359BD: pop     edi
0x4359BE: pop     esi
0x4359BF: pop     ebp
0x4359C0: xor     ecx, esp
0x4359C2: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4359C7: add     esp, 10Ch
0x4359CD: retn    8
