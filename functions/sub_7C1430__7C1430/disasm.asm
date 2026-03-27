0x7C1430: push    0FFFFFFFFh
0x7C1432: push    offset SEH_7C1430
0x7C1437: mov     eax, large fs:0
0x7C143D: push    eax
0x7C143E: sub     esp, 0Ch
0x7C1441: push    ebx
0x7C1442: push    ebp
0x7C1443: push    esi
0x7C1444: push    edi
0x7C1445: mov     eax, ds:0B30AACh
0x7C144A: xor     eax, esp
0x7C144C: push    eax
0x7C144D: lea     eax, [esp+2Ch+var_C]
0x7C1451: mov     large fs:0, eax
0x7C1457: mov     eax, [esp+2Ch+arg_4]
0x7C145B: xor     ebx, ebx
0x7C145D: xor     edi, edi
0x7C145F: cmp     ds:0B42E96h, bl
0x7C1465: mov     ebp, 2
0x7C146A: mov     [esp+2Ch+var_10], ebp
0x7C146E: jz      short loc_7C1476
0x7C1470: mov     esi, [esp+2Ch+arg_8]
0x7C1474: jmp     short loc_7C1498
0x7C1476: mov     edx, [esp+2Ch+arg_8]
0x7C147A: cmp     eax, edx
0x7C147C: jle     short loc_7C1480
0x7C147E: mov     edx, eax
0x7C1480: mov     eax, 1
0x7C1485: cmp     edx, eax
0x7C1487: jle     short loc_7C1496
0x7C1489: lea     esp, [esp+0]
0x7C1490: add     eax, eax
0x7C1492: cmp     eax, edx
0x7C1494: jl      short loc_7C1490
0x7C1496: mov     esi, eax
0x7C1498: mov     edx, [esp+2Ch+arg_C]
0x7C149C: test    edx, edx
0x7C149E: mov     [esp+2Ch+var_18], ebp
0x7C14A2: mov     [esp+2Ch+var_14], ebp
0x7C14A6: jz      short loc_7C14B5
0x7C14A8: mov     byte ptr ds:0B3FF00h, 1
0x7C14AF: mov     ds:0B2752Ch, edx
0x7C14B5: mov     edx, [esp+2Ch+arg_14]
0x7C14B9: mov     ebp, edx
0x7C14BB: and     ebp, 8
0x7C14BE: mov     [esp+2Ch+arg_8], ebp
0x7C14C2: jz      short loc_7C14CA
0x7C14C4: mov     ds:0B27530h, bl
0x7C14CA: mov     ebp, edx
0x7C14CC: and     ebp, 80h
0x7C14D2: jz      short loc_7C14DA
0x7C14D4: mov     ds:0B294ECh, ebx
0x7C14DA: test    edx, 100h
0x7C14E0: jnz     short loc_7C14E5
0x7C14E2: mov     edi, [ecx+40h]
0x7C14E5: mov     ecx, edx
0x7C14E7: shr     ecx, 2
0x7C14EA: not     cl
0x7C14EC: and     cl, 1
0x7C14EF: test    dl, 10h
0x7C14F2: mov     byte ptr [esp+2Ch+arg_4], cl
0x7C14F6: jz      short loc_7C154E
0x7C14F8: mov     ecx, ds:0B43104h
0x7C14FE: lea     edx, [esp+2Ch+var_18]
0x7C1502: push    edx
0x7C1503: push    ecx
0x7C1504: push    eax
0x7C1505: call    sub_9A1CE0
0x7C150A: mov     esi, eax
0x7C150C: add     esp, 0Ch
0x7C150F: test    esi, esi
0x7C1511: jz      short loc_7C1565
0x7C1513: push    24h ; '$'; Size
0x7C1515: call    FormHeapAlloc
0x7C151A: add     esp, 4
0x7C151D: mov     [esp+2Ch+arg_4], eax
0x7C1521: test    eax, eax
0x7C1523: mov     [esp+2Ch+var_4], 0
0x7C152B: jz      short loc_7C1542
0x7C152D: push    edi; a4
0x7C152E: push    1; a3
0x7C1530: push    esi; a2
0x7C1531: mov     ecx, eax; this
0x7C1533: call    ??0BSRenderedTexture@@QAE@XZ; BSRenderedTexture::BSRenderedTexture(void)
0x7C1538: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7C1540: jmp     short loc_7C1563
0x7C1542: xor     eax, eax
0x7C1544: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x7C154C: jmp     short loc_7C1563
0x7C154E: mov     edx, [esp+2Ch+arg_4]
0x7C1552: push    edi
0x7C1553: push    edx
0x7C1554: lea     ecx, [esp+34h+var_18]
0x7C1558: push    ecx
0x7C1559: push    esi
0x7C155A: push    eax
0x7C155B: call    sub_7D6F40
0x7C1560: add     esp, 14h
0x7C1563: mov     ebx, eax
0x7C1565: cmp     [esp+2Ch+arg_C], 0
0x7C156A: jz      short loc_7C1573
0x7C156C: mov     byte ptr ds:0B3FF00h, 0
0x7C1573: cmp     [esp+2Ch+arg_8], 0
0x7C1578: jz      short loc_7C1581
0x7C157A: mov     byte ptr ds:0B27530h, 1
0x7C1581: test    ebp, ebp
0x7C1583: jz      short loc_7C158F
0x7C1585: mov     dword ptr ds:0B294ECh, 1
0x7C158F: test    ebx, ebx
0x7C1591: jnz     short loc_7C15A7
0x7C1593: mov     eax, ds:0B42E8Ch
0x7C1598: test    eax, eax
0x7C159A: jz      short loc_7C15A7
0x7C159C: push    ebx; _DWORD
0x7C159D: push    offset aUnableToCrea_0; "Unable to create rendered texture"
0x7C15A2: call    eax ; dword_B42E8C
0x7C15A4: add     esp, 8
0x7C15A7: mov     eax, ebx
0x7C15A9: mov     ecx, [esp+2Ch+var_C]
0x7C15AD: mov     large fs:0, ecx
0x7C15B4: pop     ecx
0x7C15B5: pop     edi
0x7C15B6: pop     esi
0x7C15B7: pop     ebp
0x7C15B8: pop     ebx
0x7C15B9: add     esp, 18h
0x7C15BC: retn    18h
