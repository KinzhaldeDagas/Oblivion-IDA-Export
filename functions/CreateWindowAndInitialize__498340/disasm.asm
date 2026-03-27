0x498340: push    0FFFFFFFFh
0x498342: push    offset CreateWindowAndInitialize_SEH
0x498347: mov     eax, large fs:0
0x49834D: push    eax
0x49834E: sub     esp, 12Ch
0x498354: mov     eax, ds:0B30AACh
0x498359: xor     eax, esp
0x49835B: mov     [esp+138h+var_10], eax
0x498362: push    ebx
0x498363: push    ebp
0x498364: push    esi
0x498365: push    edi
0x498366: mov     eax, ds:0B30AACh
0x49836B: xor     eax, esp
0x49836D: push    eax
0x49836E: lea     eax, [esp+14Ch+var_C]
0x498375: mov     large fs:0, eax
0x49837B: mov     eax, [esp+14Ch+arg_0]
0x498382: mov     ecx, [esp+14Ch+arg_4]
0x498389: mov     edx, ds:0B06C64h
0x49838F: mov     ds:0B34FACh, eax
0x498394: mov     eax, ds:0B06F6Ch
0x498399: mov     ds:0B34FB0h, ecx
0x49839F: mov     ecx, ds:0B06C5Ch
0x4983A5: push    1
0x4983A7: mov     ds:0B34FA0h, eax
0x4983AC: mov     ds:0B06C4Ch, ecx
0x4983B2: mov     ds:0B06C50h, edx
0x4983B8: call    sub_4980D0
0x4983BD: add     esp, 4
0x4983C0: or      ebp, 0FFFFFFFFh
0x4983C3: xor     ebx, ebx
0x4983C5: test    al, al
0x4983C7: jz      loc_498566
0x4983CD: cmp     ds:0B06C74h, bl
0x4983D3: mov     ecx, ds:0B34FACh
0x4983D9: jz      short loc_4983ED
0x4983DB: or      dword ptr ds:0B06C30h, 4
0x4983E2: mov     ds:0B34FA8h, ecx
0x4983E8: jmp     loc_498494
0x4983ED: mov     eax, ds:0B34FB0h
0x4983F2: mov     edx, ds:0B06C50h
0x4983F8: push    ebx
0x4983F9: push    eax
0x4983FA: mov     eax, ds:0B06C4Ch
0x4983FF: push    ebx
0x498400: push    ecx
0x498401: mov     ecx, ds:0B02C80h
0x498407: push    edx
0x498408: push    eax
0x498409: push    ebx
0x49840A: push    ebx
0x49840B: push    50000000h
0x498410: push    ebx
0x498411: push    ecx
0x498412: push    ebx
0x498413: call    dword ptr ds:0A28270h
0x498419: mov     edx, ds:0B06C4Ch
0x49841F: mov     ecx, ds:0B06C50h
0x498425: push    0FFFFFFF8h
0x498427: push    eax
0x498428: mov     ds:0B34FA8h, eax
0x49842D: mov     [esp+154h+var_128], ebx
0x498431: mov     [esp+154h+var_124], ebx
0x498435: mov     [esp+154h+var_120], edx
0x498439: mov     [esp+154h+var_11C], ecx
0x49843D: call    dword ptr ds:0A28274h
0x498443: mov     edx, ds:0B34FACh
0x498449: push    eax
0x49844A: push    0FFFFFFF0h
0x49844C: push    edx
0x49844D: call    dword ptr ds:0A28278h
0x498453: push    eax
0x498454: lea     eax, [esp+150h+var_124]
0x498458: push    eax
0x498459: call    dword ptr ds:0A282ACh
0x49845F: mov     ecx, [esp+14Ch+var_11C]
0x498463: sub     ecx, [esp+14Ch+var_124]
0x498467: mov     eax, [esp+14Ch+var_120]
0x49846B: sub     eax, [esp+14Ch+var_128]
0x49846F: mov     edx, ds:0B06C7Ch
0x498475: push    40h ; '@'
0x498477: push    ecx
0x498478: mov     ecx, ds:0B06C84h
0x49847E: push    eax
0x49847F: mov     eax, ds:0B34FACh
0x498484: push    ecx
0x498485: push    edx
0x498486: push    ebx
0x498487: push    eax
0x498488: call    dword ptr ds:0A28288h
0x49848E: mov     ecx, ds:0B34FA8h
0x498494: cmp     ds:0B06DE4h, bl
0x49849A: jz      short loc_4984A0
0x49849C: xor     eax, eax
0x49849E: jmp     short loc_4984B2
0x4984A0: mov     eax, ds:0B06D0Ch
0x4984A5: xor     edx, edx
0x4984A7: cmp     eax, 1
0x4984AA: setle   dl
0x4984AD: sub     edx, 1
0x4984B0: and     eax, edx
0x4984B2: cmp     ds:0B06D14h, bl
0x4984B8: mov     ds:0B34FC0h, eax
0x4984BD: jz      short loc_4984CD
0x4984BF: cmp     eax, ebx
0x4984C1: jnz     short loc_4984CD
0x4984C3: mov     eax, 1
0x4984C8: mov     ds:0B34FC0h, eax
0x4984CD: mov     edx, ds:0B34FB4h
0x4984D3: push    edx
0x4984D4: mov     edx, ds:0B06C40h
0x4984DA: push    edx
0x4984DB: mov     edx, ds:0B34FA0h
0x4984E1: push    eax
0x4984E2: mov     eax, ds:0B34FBCh
0x4984E7: push    eax
0x4984E8: mov     eax, ds:0B06C38h
0x4984ED: push    edx
0x4984EE: mov     edx, ds:0B06C34h
0x4984F4: push    eax
0x4984F5: mov     eax, ds:0B34FB8h
0x4984FA: push    edx
0x4984FB: mov     edx, ds:0B06C54h
0x498501: push    eax
0x498502: mov     eax, ds:0B06C30h
0x498507: push    edx
0x498508: mov     edx, ds:0B06C4Ch
0x49850E: push    ecx
0x49850F: push    ecx
0x498510: mov     ecx, ds:0B06C50h
0x498516: push    eax
0x498517: push    ecx
0x498518: push    edx
0x498519: call    sub_76BD40
0x49851E: mov     esi, eax
0x498520: mov     eax, ds:0B350D8h
0x498525: add     esp, 38h
0x498528: cmp     eax, esi
0x49852A: jz      short loc_49856B
0x49852C: cmp     eax, ebx
0x49852E: jz      short loc_49854E
0x498530: mov     edi, eax
0x498532: add     eax, 4
0x498535: push    eax
0x498536: call    dword ptr ds:0A2807Ch
0x49853C: test    eax, eax
0x49853E: jnz     short loc_49854E
0x498540: cmp     edi, ebx
0x498542: jz      short loc_49854E
0x498544: mov     eax, [edi]
0x498546: mov     edx, [eax]
0x498548: push    1
0x49854A: mov     ecx, edi
0x49854C: call    edx
0x49854E: cmp     esi, ebx
0x498550: mov     ds:0B350D8h, esi
0x498556: jz      loc_4985F9
0x49855C: add     esi, 4
0x49855F: push    esi
0x498560: call    dword ptr ds:0A28078h
0x498566: mov     eax, ds:0B350D8h
0x49856B: cmp     eax, ebx
0x49856D: jz      loc_4985F9
0x498573: mov     eax, [eax+0A94h]
0x498579: push    ebx
0x49857A: mov     ecx, eax
0x49857C: call    nullsub_returnvVoid_1arg
0x498581: mov     ecx, ds:0B350D8h
0x498587: mov     eax, [ecx]
0x498589: mov     edx, [eax+64h]
0x49858C: push    offset dword_B350DC
0x498591: call    edx
0x498593: push    38h ; '8'; Size
0x498595: call    FormHeapAlloc
0x49859A: add     esp, 4
0x49859D: mov     [esp+14Ch+var_134], eax
0x4985A1: cmp     eax, ebx
0x4985A3: mov     [esp+14Ch+var_4], ebx
0x4985AA: jz      short loc_4985B5
0x4985AC: mov     ecx, eax
0x4985AE: call    NiAlphaAccumulator_Constructor
0x4985B3: jmp     short loc_4985B7
0x4985B5: xor     eax, eax
0x4985B7: mov     ecx, ds:0B350D8h; this
0x4985BD: push    eax; a2
0x4985BE: mov     [esp+150h+var_4], ebp
0x4985C5: call    NiDX9Renderer__SetShaderAccumulator
0x4985CA: cmp     byte ptr ds:0B34FA6h, 0
0x4985D1: jz      short loc_498614
0x4985D3: mov     eax, ds:0B350D8h
0x4985D8: mov     eax, [eax+280h]
0x4985DE: cmp     eax, ebx
0x4985E0: jz      short loc_498614
0x4985E2: mov     ecx, [eax]
0x4985E4: fild    dword ptr ds:0B06C8Ch
0x4985EA: mov     edx, [ecx+13Ch]
0x4985F0: push    ecx
0x4985F1: fstp    dword ptr [esp+150h+var_150]
0x4985F4: push    eax
0x4985F5: call    edx
0x4985F7: jmp     short loc_498614
0x4985F9: mov     ds:0B34FC8h, bl
0x4985FF: xor     eax, eax
0x498601: mov     cl, ds:byte_A3E2C0[eax]
0x498607: mov     ds:byte_B34FC8[eax], cl
0x49860D: add     eax, 1
0x498610: test    cl, cl
0x498612: jnz     short loc_498601
0x498614: push    900h; Size
0x498619: call    FormHeapAlloc
0x49861E: add     esp, 4
0x498621: mov     [esp+14Ch+var_134], eax
0x498625: cmp     eax, ebx
0x498627: mov     [esp+14Ch+var_4], 1
0x498632: jz      short loc_49863D
0x498634: mov     ecx, eax; this
0x498636: call    ??0NiDevImageConverter@@QAE@XZ; NiDevImageConverter::NiDevImageConverter(void)
0x49863B: jmp     short loc_49863F
0x49863D: xor     eax, eax
0x49863F: push    eax
0x498640: mov     [esp+150h+var_4], ebp
0x498647: call    sub_71B290
0x49864C: mov     eax, ds:0B34FC4h
0x498651: mov     esi, ds:0B06C54h
0x498657: add     esp, 4
0x49865A: cmp     eax, ebx
0x49865C: mov     byte ptr ds:0B256CCh, 1
0x498663: mov     byte ptr ds:0B3F708h, 0
0x49866A: jnz     short loc_49867A
0x49866C: call    sub_763DE0
0x498671: cmp     eax, ebx
0x498673: mov     ds:0B34FC4h, eax
0x498678: jz      short loc_49868E
0x49867A: cmp     esi, [eax]
0x49867C: jnb     short loc_49868E
0x49867E: movzx   ecx, word ptr [eax+0Eh]
0x498682: cmp     esi, ecx
0x498684: jnb     short loc_49868E
0x498686: mov     edx, [eax+8]
0x498689: mov     eax, [edx+esi*4]
0x49868C: jmp     short loc_498690
0x49868E: xor     eax, eax
0x498690: cmp     eax, ebx
0x498692: jnz     short loc_4986BA
0x498694: mov     byte ptr ds:0B34FC8h, 0
0x49869B: xor     eax, eax
0x49869D: lea     ecx, [ecx+0]
0x4986A0: mov     cl, ds:byte_A3E2A4[eax]
0x4986A6: mov     ds:byte_B34FC8[eax], cl
0x4986AC: add     eax, 1
0x4986AF: test    cl, cl
0x4986B1: jnz     short loc_4986A0
0x4986B3: xor     eax, eax
0x4986B5: jmp     loc_498E82
0x4986BA: mov     ecx, [eax+460h]
0x4986C0: cmp     [ecx+4], ebx
0x4986C3: jz      short loc_4986D0
0x4986C5: cmp     ecx, ebx
0x4986C7: jz      short loc_4986D0
0x4986C9: lea     ebp, [ecx+4]
0x4986CC: cmp     ebp, ebx
0x4986CE: jnz     short loc_4986FA
0x4986D0: mov     byte ptr ds:0B34FC8h, 0
0x4986D7: xor     eax, eax
0x4986D9: lea     esp, [esp+0]
0x4986E0: mov     cl, ds:byte_A3E278[eax]
0x4986E6: mov     ds:byte_B34FC8[eax], cl
0x4986EC: add     eax, 1
0x4986EF: test    cl, cl
0x4986F1: jnz     short loc_4986E0
0x4986F3: xor     eax, eax
0x4986F5: jmp     loc_498E82
0x4986FA: cmp     byte ptr ds:0B06C74h, 0
0x498701: jz      short loc_498714
0x498703: mov     ecx, [ebp+0Ch]
0x498706: shr     ecx, 11h
0x498709: and     cl, 1
0x49870C: mov     ds:0B34FA5h, cl
0x498712: jmp     short loc_49871B
0x498714: mov     byte ptr ds:0B34FA5h, 0
0x49871B: mov     dl, ds:0B06DA4h
0x498721: movzx   esi, word ptr [ebp+118h]
0x498728: push    71h ; 'q'
0x49872A: push    3
0x49872C: push    80000h
0x498731: push    16h
0x498733: lea     edi, [eax+204h]
0x498739: lea     ebx, [eax+4]
0x49873C: mov     eax, ds:0B42154h
0x498741: push    1
0x498743: mov     ds:0B42F32h, dl
0x498749: mov     ecx, [eax]
0x49874B: mov     edx, [ecx+28h]
0x49874E: push    0
0x498750: push    eax
0x498751: mov     [esp+168h+var_118], edi; int
0x498755: call    edx
0x498757: push    71h ; 'q'
0x498759: push    3
0x49875B: push    20000h
0x498760: test    eax, eax
0x498762: setnl   al
0x498765: push    16h
0x498767: mov     ds:0B350D6h, al
0x49876C: mov     eax, ds:0B42154h
0x498771: mov     ecx, [eax]
0x498773: mov     edx, [ecx+28h]
0x498776: push    1
0x498778: push    0
0x49877A: push    eax
0x49877B: call    edx
0x49877D: test    eax, eax
0x49877F: setnl   al
0x498782: mov     ds:0B43071h, al
0x498787: mov     ecx, [ebp+40h]
0x49878A: shr     ecx, 0Ah
0x49878D: and     cl, 1
0x498790: mov     ds:0B43072h, cl
0x498796: mov     eax, [ebp+3Ch]
0x498799: test    al, 2
0x49879B: jz      short loc_4987A9
0x49879D: test    eax, 100h
0x4987A2: mov     [esp+14Ch+var_135], 0
0x4987A7: jz      short loc_4987AE
0x4987A9: mov     [esp+14Ch+var_135], 1
0x4987AE: cmp     byte ptr ds:0B06DE4h, 0
0x4987B5: mov     al, ds:0B06CC4h
0x4987BA: jz      short loc_4987D2
0x4987BC: test    al, al
0x4987BE: jz      short loc_4987D2
0x4987C0: cmp     byte ptr ds:0B350D6h, 0
0x4987C7: jz      short loc_4987D2
0x4987C9: mov     byte ptr ds:0B43070h, 1
0x4987D0: jmp     short loc_4987ED
0x4987D2: test    al, al
0x4987D4: mov     byte ptr ds:0B43070h, 0
0x4987DB: jz      short loc_4987ED
0x4987DD: cmp     byte ptr ds:0B06D34h, 0
0x4987E4: mov     byte ptr ds:0B43073h, 1
0x4987EB: jnz     short loc_4987F4
0x4987ED: mov     byte ptr ds:0B43073h, 0
0x4987F4: cmp     [esp+14Ch+var_135], 0
0x4987F9: jz      short loc_49880B
0x4987FB: cmp     byte ptr ds:0B06DBCh, 0
0x498802: mov     byte ptr ds:0B42E96h, 1
0x498809: jz      short loc_498812
0x49880B: mov     byte ptr ds:0B42E96h, 0
0x498812: cmp     si, 60h ; '`'
0x498816: mov     edx, ds:0B06D24h
0x49881C: mov     eax, ds:0B06D2Ch
0x498821: mov     ds:0B4205Ch, edx
0x498827: mov     ds:0B42060h, eax
0x49882C: jbe     short loc_49883C
0x49882E: cmp     dword ptr [ebp+110h], 20h ; ' '
0x498835: jge     short loc_49883C
0x498837: mov     esi, 60h ; '`'
0x49883C: movzx   ecx, byte ptr ds:0B06DB4h
0x498843: mov     edx, ds:0B06C48h
0x498849: movzx   eax, si
0x49884C: push    eax; int
0x49884D: push    ebx; Str1
0x49884E: push    edi; int
0x49884F: push    ecx; char
0x498850: mov     [esp+15Ch+var_134], eax; int
0x498854: mov     eax, ds:0B06C44h
0x498859: push    edx; int
0x49885A: push    eax; int
0x49885B: call    SetShaderPackage
0x498860: add     esp, 18h
0x498863: cmp     dword ptr ds:0B42F48h, 5
0x49886A: jge     short loc_498873
0x49886C: mov     byte ptr ds:0B06F14h, 0
0x498873: mov     cx, ds:0B06F1Ch
0x49887A: push    3; MaxCount
0x49887C: push    offset byte_A3E274; Str2
0x498881: push    ebx; Str1
0x498882: mov     ds:0B2C67Ch, cx
0x498889: call    __strnicmp
0x49888E: add     esp, 0Ch
0x498891: test    eax, eax
0x498893: jnz     short loc_4988E3
0x498895: push    offset LibFileName; "ATIMGPUD.dll"
0x49889A: call    dword ptr ds:0A28118h
0x4988A0: mov     esi, eax
0x4988A2: test    esi, esi
0x4988A4: jz      short loc_4988D1
0x4988A6: push    offset ProcName; "AtiQueryMgpuCount"
0x4988AB: push    esi; hModule
0x4988AC: call    dword ptr ds:0A2811Ch
0x4988B2: test    eax, eax
0x4988B4: jz      short loc_4988CA
0x4988B6: call    eax
0x4988B8: test    eax, eax
0x4988BA: jle     short loc_4988CA
0x4988BC: mov     byte ptr ds:0B43075h, 1
0x4988C3: mov     byte ptr ds:0B42E97h, 0
0x4988CA: push    esi; hLibModule
0x4988CB: call    dword ptr ds:0A28204h
0x4988D1: cmp     dword ptr ds:0B34FC0h, 2
0x4988D8: jl      loc_49896A
0x4988DE: jmp     loc_49897A
0x4988E3: push    2; MaxCount
0x4988E5: push    offset aNv; "nv"
0x4988EA: push    ebx; Str1
0x4988EB: call    __strnicmp
0x4988F0: add     esp, 0Ch
0x4988F3: test    eax, eax
0x4988F5: jnz     short loc_498961
0x4988F7: push    offset aNvcpl_dll; "NVCPL.dll"
0x4988FC: call    dword ptr ds:0A28118h
0x498902: mov     edi, eax
0x498904: test    edi, edi
0x498906: jz      short loc_49896A
0x498908: push    offset aNvcplgetdatain; "NvCplGetDataInt"
0x49890D: push    edi; hModule
0x49890E: call    dword ptr ds:0A2811Ch
0x498914: mov     esi, eax
0x498916: test    esi, esi
0x498918: jz      short loc_498958
0x49891A: lea     edx, [esp+14Ch+var_12C]
0x49891E: xor     eax, eax
0x498920: push    edx
0x498921: push    8
0x498923: mov     [esp+154h+var_12C], eax
0x498927: mov     [esp+154h+var_130], eax
0x49892B: call    esi
0x49892D: lea     eax, [esp+154h+var_130]
0x498931: push    eax
0x498932: push    9
0x498934: call    esi
0x498936: add     esp, 10h
0x498939: cmp     [esp+14Ch+var_12C], 0
0x49893E: jle     short loc_498958
0x498940: test    [esp+14Ch+var_130], 10000000h
0x498948: jz      short loc_498958
0x49894A: mov     byte ptr ds:0B43075h, 1
0x498951: mov     byte ptr ds:0B42E97h, 0
0x498958: push    edi; hLibModule
0x498959: call    dword ptr ds:0A28204h
0x49895F: jmp     short loc_49896A
0x498961: cmp     dword ptr ds:0B34FC0h, 2
0x498968: jge     short loc_49897A
0x49896A: cmp     byte ptr ds:0B06CACh, 0
0x498971: mov     byte ptr ds:0B42E84h, 1
0x498978: jnz     short loc_498981
0x49897A: mov     byte ptr ds:0B42E84h, 0
0x498981: fild    dword ptr ds:0B06C50h
0x498987: mov     byte ptr ds:0B350D7h, 0
0x49898E: fidiv   dword ptr ds:0B06C4Ch
0x498994: fcomp   qword ptr ds:0A31C70h
0x49899A: fnstsw  ax
0x49899C: test    ah, 44h
0x49899F: jnp     short loc_4989A8
0x4989A1: mov     byte ptr ds:0B350D7h, 1
0x4989A8: xor     esi, esi
0x4989AA: lea     ebx, [ebx+0]
0x4989B0: cmp     esi, 0Ch; switch 13 cases
0x4989B3: ja      short CreateWindowAndInitialize___def_4989B5; jumptable 004989B5 default case
0x4989B5: jmp     ds:jpt_4989B5[esi*4]; switch jump
0x4989BC: mov     eax, 17h; jumptable 004989B5 case 0
0x4989C1: jmp     short loc_498A19
0x4989C3: mov     eax, 18h; jumptable 004989B5 case 1
0x4989C8: jmp     short loc_498A19
0x4989CA: mov     eax, 19h; jumptable 004989B5 case 2
0x4989CF: jmp     short loc_498A19
0x4989D1: mov     eax, 1Ah; jumptable 004989B5 case 3
0x4989D6: jmp     short loc_498A19
0x4989D8: mov     eax, 51h ; 'Q'; jumptable 004989B5 case 4
0x4989DD: jmp     short loc_498A19
0x4989DF: mov     eax, 14h; jumptable 004989B5 case 5
0x4989E4: jmp     short loc_498A19
0x4989E6: mov     eax, 15h; jumptable 004989B5 case 6
0x4989EB: jmp     short loc_498A19
0x4989ED: mov     eax, 16h; jumptable 004989B5 case 7
0x4989F2: jmp     short loc_498A19
0x4989F4: mov     eax, 72h ; 'r'; jumptable 004989B5 case 8
0x4989F9: jmp     short loc_498A19
0x4989FB: mov     eax, 24h ; '$'; jumptable 004989B5 case 10
0x498A00: jmp     short loc_498A19
0x498A02: mov     eax, 71h ; 'q'; jumptable 004989B5 case 9
0x498A07: jmp     short loc_498A19
0x498A09: mov     eax, 74h ; 't'; jumptable 004989B5 case 11
0x498A0E: jmp     short loc_498A19
0x498A10: mov     eax, 32h ; '2'; jumptable 004989B5 case 12
0x498A15: jmp     short loc_498A19
0x498A17: xor     eax, eax; jumptable 004989B5 default case
0x498A19: mov     ecx, ds:0B42154h
0x498A1F: mov     edx, [ecx]
0x498A21: push    eax
0x498A22: mov     eax, [edx+28h]
0x498A25: push    3
0x498A27: push    0
0x498A29: push    16h
0x498A2B: push    1
0x498A2D: push    0
0x498A2F: push    ecx
0x498A30: call    eax
0x498A32: test    eax, eax
0x498A34: setnl   cl
0x498A37: mov     ds:byte_B42E98[esi], cl
0x498A3D: add     esi, 1
0x498A40: cmp     esi, 0Dh
0x498A43: jl      loc_4989B0
0x498A49: fld     dword ptr ds:0B06C2Ch
0x498A4F: fld     dword ptr ds:0B06F64h
0x498A55: fld     st
0x498A57: fucomp  st(2)
0x498A59: fnstsw  ax
0x498A5B: fstp    st(1)
0x498A5D: test    ah, 44h
0x498A60: jnp     short loc_498A7C
0x498A62: fldz
0x498A64: fcomp   st(1)
0x498A66: fnstsw  ax
0x498A68: test    ah, 5
0x498A6B: jp      short loc_498A7C
0x498A6D: fstp    dword ptr ds:0B06C2Ch
0x498A73: mov     byte ptr ds:0B34FA4h, 1
0x498A7A: jmp     short loc_498A7E
0x498A7C: fstp    st
0x498A7E: call    sub_7B7070
0x498A83: push    offset word_B3F280
0x498A88: lea     edx, [esp+150h+Filename]
0x498A8C: push    offset aSrendererinfo_; "%sRendererInfo.txt"
0x498A91: push    edx
0x498A92: mov     edi, eax
0x498A94: call    __sprintf
0x498A99: lea     eax, [esp+158h+Filename]
0x498A9D: push    offset aW; "w"
0x498AA2: push    eax; Filename
0x498AA3: call    _fopen
0x498AA8: mov     esi, eax
0x498AAA: add     esp, 14h
0x498AAD: test    esi, esi
0x498AAF: jz      loc_498D53
0x498AB5: mov     ecx, [esp+14Ch+var_118]
0x498AB9: push    ebx
0x498ABA: push    ecx
0x498ABB: push    offset aRendererDevice; "Renderer Device Information:\n\t%s\n\t%"...
0x498AC0: push    esi; File
0x498AC1: call    _fprintf
0x498AC6: push    edi
0x498AC7: push    offset aRenderpathS; "\tRenderPath         \t\t: %s\n"
0x498ACC: push    esi; File
0x498ACD: call    _fprintf
0x498AD2: movzx   edx, word ptr [ebp+0CCh]
0x498AD9: push    edx
0x498ADA: push    offset aPsversionX; "\tPSversion          \t\t: %X\n"
0x498ADF: push    esi; File
0x498AE0: call    _fprintf
0x498AE5: movzx   eax, word ptr [ebp+0C4h]
0x498AEC: push    eax
0x498AED: push    offset aVsversionX; "\tVSversion          \t\t: %X\n"
0x498AF2: push    esi; File
0x498AF3: call    _fprintf
0x498AF8: call    sub_7B47E0
0x498AFD: push    eax
0x498AFE: push    offset aVstargetS; "\tVStarget           \t\t: %s\n"
0x498B03: push    esi; File
0x498B04: call    _fprintf
0x498B09: add     esp, 40h
0x498B0C: push    0
0x498B0E: call    sub_7B4780
0x498B13: push    eax
0x498B14: push    offset aPstargetS; "\tPStarget           \t\t: %s\n"
0x498B19: push    esi; File
0x498B1A: call    _fprintf
0x498B1F: push    1
0x498B21: call    sub_7B4780
0x498B26: push    eax
0x498B27: push    offset aPs2xtargetS; "\tPS2xtarget         \t\t: %s\n"
0x498B2C: push    esi; File
0x498B2D: call    _fprintf
0x498B32: mov     ecx, [esp+16Ch+var_134]
0x498B36: push    ecx
0x498B37: push    offset aMaxps20instI; "\tmaxPS20inst        \t\t: %i\n"
0x498B3C: push    esi; File
0x498B3D: call    _fprintf
0x498B42: add     esp, 2Ch
0x498B45: cmp     byte ptr ds:0B42EA5h, 0
0x498B4C: mov     eax, offset off_A3E128
0x498B51: jnz     short loc_498B58
0x498B53: mov     eax, offset aNo; "no"
0x498B58: push    eax
0x498B59: push    offset a3_0ShadersS; "\t3.0 Shaders        \t\t: %s\n"
0x498B5E: push    esi; File
0x498B5F: call    _fprintf
0x498B64: add     esp, 0Ch
0x498B67: cmp     byte ptr ds:0B06CC4h, 0
0x498B6E: mov     eax, offset off_A3E128
0x498B73: jnz     short loc_498B7A
0x498B75: mov     eax, offset aNo; "no"
0x498B7A: push    eax
0x498B7B: push    offset aImageSpaceEffe; "\tImage space effects\t\t: %s\n"
0x498B80: push    esi; File
0x498B81: call    _fprintf
0x498B86: add     esp, 0Ch
0x498B89: cmp     [esp+14Ch+var_135], 0
0x498B8E: mov     eax, offset off_A3E128
0x498B93: jnz     short loc_498B9A
0x498B95: mov     eax, offset aNo; "no"
0x498B9A: push    eax
0x498B9B: push    offset aNonpowerof2tex; "\tNonpowerof2textures\t\t: %s\n"
0x498BA0: push    esi; File
0x498BA1: call    _fprintf
0x498BA6: add     esp, 0Ch
0x498BA9: cmp     byte ptr ds:0B350D6h, 0
0x498BB0: mov     eax, offset off_A3E128
0x498BB5: jnz     short loc_498BBC
0x498BB7: mov     eax, offset aNo; "no"
0x498BBC: push    eax
0x498BBD: push    offset aFp16argbBlendi; "\tFP16ARGB blending  \t\t: %s\n"
0x498BC2: push    esi; File
0x498BC3: call    _fprintf
0x498BC8: add     esp, 0Ch
0x498BCB: cmp     byte ptr ds:0B43071h, 0
0x498BD2: mov     eax, offset off_A3E128
0x498BD7: jnz     short loc_498BDE
0x498BD9: mov     eax, offset aNo; "no"
0x498BDE: push    eax
0x498BDF: push    offset aFp16argbFilter; "\tFP16ARGB filtering \t\t: %s\n"
0x498BE4: push    esi; File
0x498BE5: call    _fprintf
0x498BEA: add     esp, 0Ch
0x498BED: cmp     byte ptr ds:0B43070h, 0
0x498BF4: mov     eax, offset off_A3E128
0x498BF9: jnz     short loc_498C00
0x498BFB: mov     eax, offset aNo; "no"
0x498C00: push    eax
0x498C01: push    offset aHighDynamicRan; "\tHigh dynamic range \t\t: %s\n"
0x498C06: push    esi; File
0x498C07: call    _fprintf
0x498C0C: add     esp, 0Ch
0x498C0F: cmp     byte ptr ds:0B43073h, 0
0x498C16: mov     eax, offset off_A3E128
0x498C1B: jnz     short loc_498C22
0x498C1D: mov     eax, offset aNo; "no"
0x498C22: push    eax
0x498C23: push    offset aBloomLightingS; "\tBloom lighting     \t\t: %s\n"
0x498C28: push    esi; File
0x498C29: call    _fprintf
0x498C2E: add     esp, 0Ch
0x498C31: cmp     byte ptr ds:0B42E84h, 0
0x498C38: mov     eax, offset off_A3E128
0x498C3D: jnz     short loc_498C44
0x498C3F: mov     eax, offset aNo; "no"
0x498C44: push    eax
0x498C45: push    offset aRefractionS; "\tRefraction         \t\t: %s\n"
0x498C4A: push    esi; File
0x498C4B: call    _fprintf
0x498C50: add     esp, 0Ch
0x498C53: cmp     byte ptr ds:0B42F32h, 0
0x498C5A: mov     eax, offset off_A3E128
0x498C5F: jnz     short loc_498C66
0x498C61: mov     eax, offset aNo; "no"
0x498C66: push    eax
0x498C67: push    offset a2_0HairS; "\t2.0 hair           \t\t: %s\n"
0x498C6C: push    esi; File
0x498C6D: call    _fprintf
0x498C72: add     esp, 0Ch
0x498C75: cmp     byte ptr ds:0B43075h, 0
0x498C7C: mov     eax, offset off_A3E128
0x498C81: jnz     short loc_498C88
0x498C83: mov     eax, offset aNo; "no"
0x498C88: push    eax
0x498C89: push    offset aSliModeS; "\tSLI mode           \t\t: %s\n"
0x498C8E: push    esi; File
0x498C8F: call    _fprintf
0x498C94: add     esp, 0Ch
0x498C97: cmp     byte ptr ds:0B07050h, 0
0x498C9E: mov     eax, offset off_A3E128
0x498CA3: jnz     short loc_498CAA
0x498CA5: mov     eax, offset aNo; "no"
0x498CAA: push    eax
0x498CAB: push    offset aWaterShaderS; "\tWater shader       \t\t: %s\n"
0x498CB0: push    esi; File
0x498CB1: call    _fprintf
0x498CB6: add     esp, 0Ch
0x498CB9: cmp     byte ptr ds:0B07060h, 0
0x498CC0: mov     eax, offset off_A3E128
0x498CC5: jnz     short loc_498CCC
0x498CC7: mov     eax, offset aNo; "no"
0x498CCC: push    eax
0x498CCD: push    offset aWaterReflectio; "\tWater reflections  \t\t: %s\n"
0x498CD2: push    esi; File
0x498CD3: call    _fprintf
0x498CD8: add     esp, 0Ch
0x498CDB: cmp     byte ptr ds:0B07090h, 0
0x498CE2: mov     eax, offset off_A3E128
0x498CE7: jnz     short loc_498CEE
0x498CE9: mov     eax, offset aNo; "no"
0x498CEE: push    eax
0x498CEF: push    offset aWaterDisplacem; "\tWater displacement \t\t: %s\n"
0x498CF4: push    esi; File
0x498CF5: call    _fprintf
0x498CFA: add     esp, 0Ch
0x498CFD: cmp     byte ptr ds:0B07058h, 0
0x498D04: mov     eax, offset off_A3E128
0x498D09: jnz     short loc_498D10
0x498D0B: mov     eax, offset aNo; "no"
0x498D10: push    eax
0x498D11: push    offset aWaterHighResS; "\tWater high res     \t\t: %s\n"
0x498D16: push    esi; File
0x498D17: call    _fprintf
0x498D1C: mov     ecx, ds:0B350D8h
0x498D22: add     esp, 0Ch
0x498D25: call    sub_497E10
0x498D2A: mov     edx, [eax+10h]
0x498D2D: push    edx
0x498D2E: push    offset aMultisampleTyp; "\tMultisample Type   \t\t: %d\n"
0x498D33: push    esi; File
0x498D34: call    _fprintf
0x498D39: call    sub_7DAB80
0x498D3E: push    eax
0x498D3F: push    offset aShaderPackageD; "\tShader Package     \t\t: %d\n"
0x498D44: push    esi; File
0x498D45: call    _fprintf
0x498D4A: push    esi; File
0x498D4B: call    _fclose
0x498D50: add     esp, 1Ch
0x498D53: cmp     byte ptr ds:0B06DE4h, 0
0x498D5A: jz      short loc_498D64
0x498D5C: fld     dword ptr ds:0B06E34h
0x498D62: jmp     short loc_498D6A
0x498D64: fld     dword ptr ds:0B06DDCh
0x498D6A: fstp    dword ptr ds:0B42F4Ch
0x498D70: movzx   eax, byte ptr ds:0B06F74h
0x498D77: fld     dword ptr ds:0B06E4Ch
0x498D7D: movzx   ecx, byte ptr ds:0B06F84h
0x498D84: fstp    dword ptr ds:0B42EA8h
0x498D8A: fld     dword ptr ds:0B06E54h
0x498D90: fstp    dword ptr ds:0B42F44h
0x498D96: mov     edx, ds:0B06F8Ch
0x498D9C: fld     dword ptr ds:0B06EACh
0x498DA2: mov     ds:0B430ACh, al
0x498DA7: movzx   eax, byte ptr ds:0B06F94h
0x498DAE: fstp    dword ptr ds:0B4307Ch
0x498DB4: fld     dword ptr ds:0B06EB4h
0x498DBA: fstp    dword ptr ds:0B43080h
0x498DC0: fld     dword ptr ds:0B06EBCh
0x498DC6: mov     ds:0B42E86h, al
0x498DCB: fstp    dword ptr ds:0B43084h
0x498DD1: xor     eax, eax
0x498DD3: fld     dword ptr ds:0B06EC4h
0x498DD9: cmp     dword ptr ds:0B42F48h, 5
0x498DE0: fstp    dword ptr ds:0B43088h
0x498DE6: mov     ds:0B430ADh, cl
0x498DEC: fld     dword ptr ds:0B06ECCh
0x498DF2: movzx   ecx, byte ptr ds:0B06F9Ch
0x498DF9: fstp    dword ptr ds:0B4308Ch
0x498DFF: fld     dword ptr ds:0B06ED4h
0x498E05: fstp    dword ptr ds:0B43090h
0x498E0B: setl    al
0x498E0E: fld     dword ptr ds:0B06EDCh
0x498E14: mov     ds:0B2C67Eh, cl
0x498E1A: mov     ecx, ds:0B06F2Ch
0x498E20: fstp    dword ptr ds:0B43094h
0x498E26: fld     dword ptr ds:0B06EE4h
0x498E2C: mov     ds:0B2C674h, edx
0x498E32: mov     edx, ds:0B06A2Ch
0x498E38: fstp    dword ptr ds:0B43098h
0x498E3E: fld     dword ptr ds:0B06EECh
0x498E44: mov     ds:0B2C684h, edx
0x498E4A: fstp    dword ptr ds:0B4309Ch
0x498E50: fld     dword ptr ds:0B06EF4h
0x498E56: fstp    dword ptr ds:0B430A0h
0x498E5C: fld     dword ptr ds:0B06F7Ch
0x498E62: sub     eax, 1
0x498E65: and     eax, 2
0x498E68: fstp    dword ptr ds:0B2C680h
0x498E6E: cmp     eax, ecx
0x498E70: mov     ds:0B430B0h, eax
0x498E75: jb      short loc_498E7D
0x498E77: mov     ds:0B430B0h, ecx
0x498E7D: mov     eax, ds:0B350D8h
0x498E82: mov     ecx, dword ptr [esp+14Ch+var_C]
0x498E89: mov     large fs:0, ecx
0x498E90: pop     ecx
0x498E91: pop     edi
0x498E92: pop     esi
0x498E93: pop     ebp
0x498E94: pop     ebx
0x498E95: mov     ecx, [esp+138h+var_10]
0x498E9C: xor     ecx, esp
0x498E9E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x498EA3: add     esp, 138h
0x498EA9: retn
