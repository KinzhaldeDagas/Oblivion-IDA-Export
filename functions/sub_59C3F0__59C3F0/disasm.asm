0x59C3F0: push    0FFFFFFFFh
0x59C3F2: push    offset SEH_59C5E0
0x59C3F7: mov     eax, large fs:0
0x59C3FD: push    eax
0x59C3FE: sub     esp, 1Ch
0x59C401: mov     eax, ds:0B30AACh
0x59C406: xor     eax, esp
0x59C408: mov     [esp+28h+var_10], eax
0x59C40C: push    ebx; a3
0x59C40D: push    ebp; a3
0x59C40E: push    esi; a3
0x59C40F: push    edi; a3
0x59C410: mov     eax, ds:0B30AACh
0x59C415: xor     eax, esp
0x59C417: push    eax; a3
0x59C418: lea     eax, [esp+3Ch+var_C]
0x59C41C: mov     large fs:0, eax
0x59C422: xor     ebx, ebx
0x59C424: cmp     dword ptr [esp+3Ch+arg_0], ebx
0x59C428: mov     esi, ecx
0x59C42A: jz      loc_59C5B1
0x59C430: mov     eax, [esi+34h]
0x59C433: mov     ebp, [eax+34h]
0x59C436: cmp     ebp, ebx
0x59C438: jz      short loc_59C4A5
0x59C43A: mov     edi, [ebp+8]
0x59C43D: cmp     edi, ebx
0x59C43F: lea     eax, [ebp+8]
0x59C442: mov     ebp, [ebp+0]
0x59C445: jz      short loc_59C4A1
0x59C447: cmp     edi, dword ptr [esp+3Ch+arg_0]
0x59C44B: jz      short loc_59C4A1
0x59C44D: fld1
0x59C44F: push    ecx
0x59C450: fstp    [esp+40h+a2]; a3
0x59C453: mov     ecx, edi; this
0x59C455: push    0FC9h; a2
0x59C45A: call    Tile_SetFloat
0x59C45F: fld     dword ptr ds:0A2FFE8h
0x59C465: push    ecx
0x59C466: fstp    [esp+40h+a2]; a3
0x59C469: push    0FCCh; a2
0x59C46E: mov     ecx, edi; this
0x59C470: call    Tile_SetFloat
0x59C475: fld     dword ptr ds:0A2FFE8h
0x59C47B: push    ecx
0x59C47C: fstp    [esp+40h+a2]; a3
0x59C47F: push    0FCDh; a2
0x59C484: mov     ecx, edi; this
0x59C486: call    Tile_SetFloat
0x59C48B: fld     dword ptr ds:0A2FFE8h
0x59C491: push    ecx
0x59C492: fstp    [esp+40h+a2]; a3
0x59C495: push    0FCEh; a2
0x59C49A: mov     ecx, edi; this
0x59C49C: call    Tile_SetFloat
0x59C4A1: cmp     ebp, ebx
0x59C4A3: jnz     short loc_59C43A
0x59C4A5: mov     ecx, [esi+54h]; this
0x59C4A8: fld1
0x59C4AA: push    ecx
0x59C4AB: fstp    [esp+40h+a2]; a3
0x59C4AE: push    0FC9h; a2
0x59C4B3: call    Tile_SetFloat
0x59C4B8: fld1
0x59C4BA: mov     ecx, [esi+58h]; this
0x59C4BD: push    ecx
0x59C4BE: fstp    [esp+40h+a2]; a3
0x59C4C1: push    0FC9h; a2
0x59C4C6: call    Tile_SetFloat
0x59C4CB: mov     ecx, [esi+2Ch]
0x59C4CE: push    0FB1h
0x59C4D3: call    Tile_GetFloat
0x59C4D8: fstp    dword ptr [esi+0DCh]
0x59C4DE: mov     ecx, [esi+2Ch]
0x59C4E1: push    0FB2h
0x59C4E6: call    Tile_GetFloat
0x59C4EB: fstp    dword ptr [esi+0E0h]
0x59C4F1: mov     ecx, [esi+2Ch]; this
0x59C4F4: fldz
0x59C4F6: push    ecx
0x59C4F7: fstp    [esp+40h+a2]; a3
0x59C4FA: push    0FB1h; a2
0x59C4FF: call    Tile_SetFloat
0x59C504: fldz
0x59C506: mov     ecx, [esi+2Ch]; this
0x59C509: push    ecx
0x59C50A: fstp    [esp+40h+a2]; a3
0x59C50D: push    0FB2h; a2
0x59C512: call    Tile_SetFloat
0x59C517: fld1
0x59C519: mov     ecx, [esi+4]; this
0x59C51C: push    ecx
0x59C51D: fstp    [esp+40h+a2]; a3
0x59C520: push    0FB2h; a2
0x59C525: call    Tile_SetFloat
0x59C52A: mov     [esp+3Ch+var_28], ebx
0x59C52E: mov     word ptr [esp+3Ch+var_24], bx
0x59C533: mov     word ptr [esp+3Ch+var_24+2], bx
0x59C538: mov     ecx, [esi+5Ch]
0x59C53B: mov     eax, ds:0B39548h[ecx*4]
0x59C542: cmp     eax, ebx
0x59C544: mov     [esp+3Ch+var_4], ebx
0x59C548: jz      short loc_59C54E
0x59C54A: mov     ecx, [eax]
0x59C54C: jmp     short loc_59C550
0x59C54E: xor     ecx, ecx
0x59C550: lea     edx, [esp+3Ch+var_20]
0x59C554: mov     al, [ecx]
0x59C556: mov     [edx], al
0x59C558: add     ecx, 1
0x59C55B: add     edx, 1
0x59C55E: cmp     al, bl
0x59C560: jnz     short loc_59C554
0x59C562: mov     edi, ds:0B38EE8h
0x59C568: lea     edx, [esp+3Ch+var_20]
0x59C56C: push    edx; unsigned __int8 *
0x59C56D: call    __mbslwr
0x59C572: push    edi
0x59C573: push    eax
0x59C574: mov     eax, ds:0B38EE0h
0x59C579: push    eax; ArgList
0x59C57A: lea     ecx, [esp+4Ch+var_28]
0x59C57E: push    offset aSSS_6; "%s %s %s"
0x59C583: push    ecx; int
0x59C584: call    BSStringT_Static_Format
0x59C589: mov     edi, [esp+54h+var_28]
0x59C58D: mov     ecx, [esi+50h]
0x59C590: add     esp, 18h
0x59C593: push    edi
0x59C594: push    0FDEh
0x59C599: call    Tile_SetString
0x59C59E: mov     edx, dword ptr [esp+3Ch+arg_0]
0x59C5A2: push    edi
0x59C5A3: mov     [esi+0D8h], edx
0x59C5A9: call    FormHeapFree
0x59C5AE: add     esp, 4
0x59C5B1: mov     ecx, [esp+3Ch+var_C]
0x59C5B5: mov     large fs:0, ecx
0x59C5BC: pop     ecx
0x59C5BD: pop     edi
0x59C5BE: pop     esi
0x59C5BF: pop     ebp
0x59C5C0: pop     ebx
0x59C5C1: mov     ecx, [esp+28h+var_10]
0x59C5C5: xor     ecx, esp
0x59C5C7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x59C5CC: add     esp, 28h
0x59C5CF: retn    4
