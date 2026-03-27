0x5CF770: mov     edx, [esp+arg_0]
0x5CF774: sub     esp, 0Ch
0x5CF777: push    ebp; a3
0x5CF778: push    esi; a3
0x5CF779: push    edi; a3
0x5CF77A: mov     edi, [esp+18h+arg_4]
0x5CF77E: xor     ebp, ebp
0x5CF780: cmp     edi, ebp
0x5CF782: mov     esi, ecx
0x5CF784: jnz     short loc_5CF78E
0x5CF786: push    edx
0x5CF787: call    sub_5CE790
0x5CF78C: mov     edi, eax
0x5CF78E: cmp     edx, 33h ; '3'
0x5CF791: jl      loc_5CF952
0x5CF797: cmp     edi, ebp
0x5CF799: jz      loc_5CF973
0x5CF79F: cmp     [esi+28h], ebp
0x5CF7A2: mov     byte ptr [esi+50h], 0FFh
0x5CF7A6: mov     [esi+3Ch], ebp
0x5CF7A9: jz      loc_5CF965
0x5CF7AF: push    ebx; a3
0x5CF7B0: push    4; int
0x5CF7B2: call    sub_57DE50
0x5CF7B7: add     esp, 4
0x5CF7BA: push    0FE0h
0x5CF7BF: mov     ecx, edi
0x5CF7C1: call    Tile_GetFloat
0x5CF7C6: call    Double_To_SInt32
0x5CF7CB: mov     ebx, eax
0x5CF7CD: mov     ecx, edi
0x5CF7CF: mov     [esp+1Ch+a3], ebx; a3
0x5CF7D3: call    sub_588D90
0x5CF7D8: fstp    qword ptr [esp+1Ch+var_8]; a3
0x5CF7DC: mov     ecx, [esi+28h]
0x5CF7DF: push    0FBDh
0x5CF7E4: call    Tile_GetFloat
0x5CF7E9: fsubr   qword ptr [esp+1Ch+var_8]
0x5CF7ED: push    ecx
0x5CF7EE: mov     ecx, [esi+28h]; this
0x5CF7F1: fstp    [esp+20h+arg_4]
0x5CF7F5: fld     [esp+20h+arg_4]
0x5CF7F9: fstp    [esp+20h+a2]; a3
0x5CF7FC: push    0FABh; a2
0x5CF801: call    Tile_SetFloat
0x5CF806: lea     eax, [ebx+ebx]
0x5CF809: mov     [esp+1Ch+arg_4], eax
0x5CF80D: fild    [esp+1Ch+arg_4]
0x5CF811: push    0FCBh
0x5CF816: mov     ecx, edi
0x5CF818: fstp    [esp+20h+arg_4]
0x5CF81C: call    Tile_GetFloat
0x5CF821: fsub    [esp+1Ch+arg_4]
0x5CF825: push    ecx
0x5CF826: mov     ecx, [esi+28h]; this
0x5CF829: fstp    [esp+20h+arg_0]
0x5CF82D: fld     [esp+20h+arg_0]
0x5CF831: fstp    [esp+20h+a2]; a3
0x5CF834: push    0FCBh; a2
0x5CF839: call    Tile_SetFloat
0x5CF83E: push    0FCAh
0x5CF843: mov     ecx, edi
0x5CF845: call    Tile_GetFloat
0x5CF84A: fsub    [esp+1Ch+arg_4]
0x5CF84E: push    ecx
0x5CF84F: mov     ecx, [esi+28h]; this
0x5CF852: fstp    [esp+20h+arg_4]
0x5CF856: fld     [esp+20h+arg_4]
0x5CF85A: fstp    [esp+20h+a2]; a3
0x5CF85D: push    0FCAh; a2
0x5CF862: call    Tile_SetFloat
0x5CF867: fild    [esp+1Ch+a3]
0x5CF86B: mov     ecx, edi
0x5CF86D: fstp    [esp+1Ch+arg_4]
0x5CF871: call    sub_588C50
0x5CF876: fadd    [esp+1Ch+arg_4]
0x5CF87A: push    ecx
0x5CF87B: mov     ecx, [esi+28h]; this
0x5CF87E: fstp    [esp+20h+arg_0]
0x5CF882: fld     [esp+20h+arg_0]
0x5CF886: fstp    [esp+20h+a2]; a3
0x5CF889: push    0FADh; a2
0x5CF88E: call    Tile_SetFloat
0x5CF893: mov     ecx, edi
0x5CF895: call    sub_588CF0
0x5CF89A: fadd    [esp+1Ch+arg_4]
0x5CF89E: push    ecx
0x5CF89F: mov     ecx, [esi+28h]; this
0x5CF8A2: fstp    [esp+20h+arg_4]
0x5CF8A6: fld     [esp+20h+arg_4]
0x5CF8AA: fstp    [esp+20h+a2]; a3
0x5CF8AD: push    0FACh; a2
0x5CF8B2: call    Tile_SetFloat
0x5CF8B7: fld     dword ptr ds:0A379B4h
0x5CF8BD: push    ecx
0x5CF8BE: mov     ecx, [esi+28h]; this
0x5CF8C1: fstp    [esp+20h+a2]; a3
0x5CF8C4: push    0FA1h; a2
0x5CF8C9: call    Tile_SetFloat
0x5CF8CE: push    0; a3
0x5CF8D0: mov     [esi+3Ch], edi
0x5CF8D3: push    0FB9h
0x5CF8D8: mov     ecx, edi
0x5CF8DA: call    Tile_GetFloat
0x5CF8DF: call    Double_To_SInt32
0x5CF8E4: mov     ecx, ds:0B333C4h; this
0x5CF8EA: push    eax; a2
0x5CF8EB: call    GetInventoryEntryOfItem
0x5CF8F0: cmp     [esi+48h], ebp
0x5CF8F3: mov     edi, eax
0x5CF8F5: jz      short loc_5CF93B
0x5CF8F7: mov     eax, [edi+8]
0x5CF8FA: push    0; int
0x5CF8FC: push    offset ??_R0?AVTESEnchantableForm@@@8; struct TypeDescriptor *
0x5CF901: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5CF906: push    0; int
0x5CF908: push    eax; void *
0x5CF909: call    OblivionDynamicCast
0x5CF90E: movzx   ebx, word ptr [eax+8]
0x5CF912: add     esp, 14h
0x5CF915: mov     ecx, edi
0x5CF917: call    sub_4849C0
0x5CF91C: movzx   ecx, bx
0x5CF91F: sub     esp, 8
0x5CF922: mov     [esp+24h+arg_4], ecx
0x5CF926: fstp    [esp+24h+a2]; float
0x5CF92A: fild    [esp+24h+arg_4]
0x5CF92E: fstp    [esp+24h+var_24]; float
0x5CF931: call    sub_5483E0
0x5CF936: add     esp, 8
0x5CF939: mov     ebp, eax
0x5CF93B: test    edi, edi
0x5CF93D: pop     ebx
0x5CF93E: jz      short loc_5CF965
0x5CF940: mov     ecx, edi
0x5CF942: call    ContainerEntryExtraData_DestroyDataTable
0x5CF947: push    edi
0x5CF948: call    FormHeapFree
0x5CF94D: add     esp, 4
0x5CF950: jmp     short loc_5CF965
0x5CF952: fld1
0x5CF954: push    ecx
0x5CF955: mov     ecx, [esi+28h]; this
0x5CF958: fstp    [esp+1Ch+var_1C]; a3
0x5CF95B: push    0FA1h; a2
0x5CF960: call    Tile_SetFloat
0x5CF965: cmp     dword ptr [esi+48h], 0
0x5CF969: jz      short loc_5CF973
0x5CF96B: push    ebp; ArgList
0x5CF96C: mov     ecx, esi
0x5CF96E: call    sub_5CEF60
0x5CF973: pop     edi
0x5CF974: pop     esi
0x5CF975: pop     ebp
0x5CF976: add     esp, 0Ch
0x5CF979: retn    8
