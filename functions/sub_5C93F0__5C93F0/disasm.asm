0x5C93F0: push    0FFFFFFFFh
0x5C93F2: push    offset SEH_5C93F0; a3
0x5C93F7: mov     eax, large fs:0
0x5C93FD: push    eax; a3
0x5C93FE: sub     esp, 14h
0x5C9401: push    ebx; a3
0x5C9402: push    ebp; a3
0x5C9403: push    esi; a3
0x5C9404: push    edi; a3
0x5C9405: mov     eax, ds:0B30AACh
0x5C940A: xor     eax, esp
0x5C940C: push    eax; a3
0x5C940D: lea     eax, [esp+34h+var_C]
0x5C9411: mov     large fs:0, eax
0x5C9417: mov     edi, ecx
0x5C9419: mov     eax, ds:0B3B5D4h
0x5C941E: add     eax, 1
0x5C9421: mov     [esp+34h+a3], eax; a3
0x5C9425: add     eax, 1
0x5C9428: xor     ebx, ebx
0x5C942A: push    ebx
0x5C942B: mov     ebp, eax
0x5C942D: mov     ds:0B3B5D4h, eax
0x5C9432: mov     eax, [esp+38h+arg_0]
0x5C9436: push    offset aRace_templat_2; "race_template_slider"
0x5C943B: push    eax
0x5C943C: mov     [esp+40h+var_4], ebx
0x5C9440: mov     [esp+40h+var_1C], ebp; a3
0x5C9444: call    Menu_CreateTileFromTemplate
0x5C9449: mov     esi, eax
0x5C944B: mov     [esp+34h+a2], ebx; a3
0x5C944F: mov     word ptr [esp+34h+var_10], bx; a3
0x5C9454: mov     word ptr [esp+34h+var_10+2], bx
0x5C9459: mov     ecx, [esp+34h+ArgList]
0x5C945D: push    ecx; ArgList
0x5C945E: lea     edx, [esp+38h+a2]
0x5C9462: push    offset aS; "%s"
0x5C9467: push    edx; int
0x5C9468: mov     byte ptr [esp+40h+var_4], 1; a3
0x5C946D: call    BSStringT_Static_Format
0x5C9472: mov     eax, [esp+40h+a2]
0x5C9476: add     esp, 4
0x5C9479: mov     ecx, esp; this
0x5C947B: mov     [esp+3Ch+var_18], esp; a3
0x5C947F: push    ebx; a3
0x5C9480: push    eax; a2
0x5C9481: mov     [ecx], ebx
0x5C9483: mov     [ecx+4], bx
0x5C9487: mov     [ecx+6], bx
0x5C948B: call    BSStringT_Set
0x5C9490: mov     ecx, esi
0x5C9492: call    sub_58A020
0x5C9497: fild    [esp+34h+a3]
0x5C949B: push    ecx
0x5C949C: mov     ecx, esi; this
0x5C949E: fstp    [esp+38h+var_38]; a3
0x5C94A1: push    0FA8h; a2
0x5C94A6: call    Tile_SetFloat
0x5C94AB: mov     ecx, [esp+34h+arg_0]
0x5C94AF: push    0FD0h
0x5C94B4: call    Tile_GetFloat
0x5C94B9: fsub    qword ptr ds:0A2F928h
0x5C94BF: push    ecx
0x5C94C0: mov     ecx, esi; this
0x5C94C2: fstp    [esp+38h+arg_0]
0x5C94C6: fld     [esp+38h+arg_0]
0x5C94CA: fstp    [esp+38h+var_38]; a3
0x5C94CD: push    0FAAh; a2
0x5C94D2: call    Tile_SetFloat
0x5C94D7: fldz
0x5C94D9: push    ecx
0x5C94DA: fstp    [esp+38h+var_38]; a3
0x5C94DD: push    0FAFh; a2
0x5C94E2: mov     ecx, esi; this
0x5C94E4: call    Tile_SetFloat
0x5C94E9: mov     ecx, [esp+34h+ArgList]
0x5C94ED: push    ecx
0x5C94EE: push    0FB0h
0x5C94F3: mov     ecx, esi
0x5C94F5: call    Tile_SetString
0x5C94FA: fld     dword ptr ds:0A6D2D8h
0x5C9500: push    ecx
0x5C9501: fstp    [esp+38h+var_38]; a3
0x5C9504: push    0FB1h; a2
0x5C9509: mov     ecx, esi; this
0x5C950B: call    Tile_SetFloat
0x5C9510: fldz
0x5C9512: push    ecx
0x5C9513: fstp    [esp+38h+var_38]; a3
0x5C9516: push    0FB1h; a2
0x5C951B: mov     ecx, esi; this
0x5C951D: call    Tile_SetFloat
0x5C9522: fldz
0x5C9524: push    ecx
0x5C9525: fstp    [esp+38h+var_38]; a3
0x5C9528: push    0FB1h; a2
0x5C952D: mov     ecx, esi; this
0x5C952F: call    Tile_SetFloat
0x5C9534: fild    [esp+34h+var_1C]
0x5C9538: push    ecx
0x5C9539: mov     ecx, esi; this
0x5C953B: fstp    [esp+38h+var_38]; a3
0x5C953E: push    0FB4h; a2
0x5C9543: call    Tile_SetFloat
0x5C9548: mov     edx, [esp+34h+arg_C]
0x5C954C: add     edx, 1
0x5C954F: mov     [esp+34h+arg_0], edx
0x5C9553: fild    [esp+34h+arg_0]
0x5C9557: push    ecx
0x5C9558: mov     ecx, esi; this
0x5C955A: fstp    [esp+38h+var_38]; a3
0x5C955D: push    0FB5h; a2
0x5C9562: call    Tile_SetFloat
0x5C9567: fild    [esp+34h+arg_10]
0x5C956B: push    ecx
0x5C956C: mov     ecx, esi; this
0x5C956E: fstp    [esp+38h+var_38]; a3
0x5C9571: push    0FB6h; a2
0x5C9576: call    Tile_SetFloat
0x5C957B: cmp     [esp+34h+arg_C], 0FFFFFFFFh
0x5C9580: mov     eax, [esp+34h+a3]
0x5C9584: mov     [edi+eax*4+94h], esi
0x5C958B: mov     [edi+ebp*4+94h], esi
0x5C9592: jz      short loc_5C9602
0x5C9594: push    ebp
0x5C9595: mov     ecx, edi
0x5C9597: call    sub_5C6860
0x5C959C: fstp    [esp+34h+arg_0]
0x5C95A0: fld     dword ptr ds:0A6D2D8h
0x5C95A6: push    ecx
0x5C95A7: fstp    [esp+38h+var_38]; a3
0x5C95AA: push    0FB1h; a2
0x5C95AF: mov     ecx, esi; this
0x5C95B1: call    Tile_SetFloat
0x5C95B6: fld     [esp+34h+arg_0]
0x5C95BA: push    ecx
0x5C95BB: fstp    [esp+38h+var_38]; a3
0x5C95BE: push    0FB1h; a2
0x5C95C3: mov     ecx, esi; this
0x5C95C5: call    Tile_SetFloat
0x5C95CA: fldz
0x5C95CC: push    ecx
0x5C95CD: fstp    [esp+38h+var_38]; a3
0x5C95D0: push    0FB1h; a2
0x5C95D5: mov     ecx, esi; this
0x5C95D7: call    Tile_SetFloat
0x5C95DC: fld     [esp+34h+arg_0]
0x5C95E0: push    ecx
0x5C95E1: fstp    [esp+38h+var_38]; a3
0x5C95E4: push    0FB8h; a2
0x5C95E9: mov     ecx, esi; this
0x5C95EB: call    Tile_SetFloat
0x5C95F0: fld1
0x5C95F2: push    ecx
0x5C95F3: fstp    [esp+38h+var_38]; a3
0x5C95F6: push    0FC2h; a2
0x5C95FB: mov     ecx, esi; this
0x5C95FD: call    Tile_SetFloat
0x5C9602: cmp     [esp+34h+arg_14], bl
0x5C9606: jz      short loc_5C961E
0x5C9608: fld     dword ptr ds:0A379B4h
0x5C960E: push    ecx
0x5C960F: fstp    [esp+38h+var_38]; a3
0x5C9612: push    0FF0h; a2
0x5C9617: mov     ecx, esi; this
0x5C9619: call    Tile_SetFloat
0x5C961E: mov     ecx, [esp+34h+a2]
0x5C9622: push    ecx
0x5C9623: call    FormHeapFree
0x5C9628: mov     edx, [esp+38h+ArgList]
0x5C962C: push    edx
0x5C962D: call    FormHeapFree
0x5C9632: add     esp, 8
0x5C9635: mov     eax, esi
0x5C9637: mov     ecx, [esp+34h+var_C]
0x5C963B: mov     large fs:0, ecx
0x5C9642: pop     ecx
0x5C9643: pop     edi
0x5C9644: pop     esi
0x5C9645: pop     ebp
0x5C9646: pop     ebx
0x5C9647: add     esp, 20h
0x5C964A: retn    18h
