0x6980B0: push    ebp
0x6980B1: mov     ebp, esp
0x6980B3: and     esp, 0FFFFFFF0h
0x6980B6: push    0FFFFFFFFh
0x6980B8: push    offset SEH_6980B0
0x6980BD: mov     eax, large fs:0
0x6980C3: push    eax
0x6980C4: sub     esp, 48h
0x6980C7: mov     eax, ds:0B30AACh
0x6980CC: xor     eax, esp
0x6980CE: mov     [esp+54h+var_14], eax
0x6980D2: push    ebx
0x6980D3: push    esi
0x6980D4: push    edi
0x6980D5: mov     eax, ds:0B30AACh
0x6980DA: xor     eax, esp
0x6980DC: push    eax
0x6980DD: lea     eax, [esp+64h+var_C]
0x6980E1: mov     large fs:0, eax
0x6980E7: mov     eax, [ebp+arg_4]
0x6980EA: mov     ebx, ecx
0x6980EC: mov     ecx, [ebp+arg_0]
0x6980EF: xor     esi, esi
0x6980F1: cmp     eax, esi
0x6980F3: mov     [esp+64h+var_4C], ecx
0x6980F7: jz      short loc_698118
0x6980F9: mov     eax, [eax+0Ch]
0x6980FC: cmp     eax, [ebx+70h]
0x6980FF: jnz     loc_6983E5
0x698105: mov     eax, [ecx]
0x698107: mov     edx, [eax+4]
0x69810A: call    edx
0x69810C: cmp     [ebx+98h], eax
0x698112: jz      loc_6983E5
0x698118: push    0DCh ; 'Ü'; Size
0x69811D: call    FormHeapAlloc
0x698122: add     esp, 4
0x698125: mov     [esp+64h+var_34], eax
0x698129: cmp     eax, esi
0x69812B: mov     [esp+64h+var_4], esi
0x69812F: jz      short loc_698141
0x698131: push    esi
0x698132: mov     ecx, eax; this
0x698134: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x698139: mov     esi, eax
0x69813B: mov     [esp+64h+a2], esi
0x69813F: jmp     short loc_698145
0x698141: mov     [esp+64h+a2], esi
0x698145: mov     ecx, ebx; this
0x698147: mov     [esp+64h+var_4], 0FFFFFFFFh
0x69814F: call    TESObjectREFR_GetParentCell
0x698154: push    ebx; TESObjectREFR *
0x698155: call    sub_4C9BE0
0x69815A: add     esp, 4
0x69815D: mov     ecx, ebx; this
0x69815F: mov     edi, eax
0x698161: call    TESObjectREFR_GetParentCell
0x698166: mov     ecx, eax; this
0x698168: add     edi, 2
0x69816B: call    TESObjectCELL_GetNiNode?
0x698170: test    eax, eax
0x698172: jz      short loc_6981A1
0x698174: movzx   ecx, word ptr [eax+0B6h]
0x69817B: cmp     ecx, edi
0x69817D: jbe     short loc_6981A1
0x69817F: mov     edx, [eax+0B0h]
0x698185: mov     edi, [edx+edi*4]
0x698188: test    edi, edi
0x69818A: jz      short loc_6981A1
0x69818C: cmp     word ptr [edi+0B6h], 3
0x698194: jbe     short loc_6981A1
0x698196: mov     eax, [edi+0B0h]
0x69819C: mov     ecx, [eax+0Ch]
0x69819F: jmp     short loc_6981A3
0x6981A1: xor     ecx, ecx
0x6981A3: mov     edx, [ecx]
0x6981A5: mov     eax, [edx+84h]
0x6981AB: push    1
0x6981AD: push    esi
0x6981AE: call    eax
0x6981B0: push    0
0x6981B2: push    esi
0x6981B3: call    sub_7F4D60
0x6981B8: mov     edi, eax
0x6981BA: add     esp, 8
0x6981BD: test    edi, edi
0x6981BF: jz      loc_6982D5
0x6981C5: mov     ecx, ds:0B381B0h
0x6981CB: mov     [edi+134h], ecx
0x6981D1: fld     dword ptr ds:0B381B8h
0x6981D7: fstp    dword ptr [edi+13Ch]
0x6981DD: fld     dword ptr ds:0B381C0h
0x6981E3: fstp    dword ptr [edi+140h]
0x6981E9: fld     dword ptr ds:0B38138h
0x6981EF: fstp    dword ptr [edi+144h]
0x6981F5: fld     dword ptr ds:0B38140h
0x6981FB: fstp    dword ptr [edi+148h]
0x698201: fld     dword ptr ds:0B38158h
0x698207: fstp    [esp+64h+var_48]
0x69820B: mov     edx, [esp+64h+var_48]
0x69820F: fld     dword ptr ds:0B38160h
0x698215: fstp    [esp+64h+var_44]
0x698219: mov     eax, [esp+64h+var_44]
0x69821D: fld     dword ptr ds:0B38168h
0x698223: mov     [edi+160h], edx
0x698229: fstp    [esp+64h+var_40]
0x69822D: mov     ecx, [esp+64h+var_40]
0x698231: fld1
0x698233: mov     [edi+164h], eax
0x698239: fst     [esp+64h+var_3C]
0x69823D: mov     [edi+168h], ecx
0x698243: mov     edx, [esp+64h+var_3C]
0x698247: mov     [edi+16Ch], edx
0x69824D: fld     dword ptr ds:0B38170h
0x698253: fstp    [esp+64h+var_48]
0x698257: mov     eax, [esp+64h+var_48]
0x69825B: fld     dword ptr ds:0B38178h
0x698261: fstp    [esp+64h+var_44]
0x698265: mov     ecx, [esp+64h+var_44]
0x698269: fld     dword ptr ds:0B38180h
0x69826F: mov     [edi+170h], eax
0x698275: fstp    [esp+64h+var_40]
0x698279: mov     edx, [esp+64h+var_40]
0x69827D: mov     [edi+174h], ecx
0x698283: fstp    [esp+64h+var_3C]
0x698287: mov     eax, [esp+64h+var_3C]
0x69828B: mov     [edi+178h], edx
0x698291: mov     [edi+17Ch], eax
0x698297: fld     dword ptr ds:0B381D0h
0x69829D: fstp    dword ptr [edi+150h]
0x6982A3: mov     ecx, ds:0B381C8h
0x6982A9: mov     [edi+14Ch], ecx
0x6982AF: fld     dword ptr ds:0B381D8h
0x6982B5: fstp    dword ptr [edi+154h]
0x6982BB: mov     ecx, edi
0x6982BD: fld     dword ptr ds:0B381E0h
0x6982C3: mov     byte ptr [edi+183h], 0
0x6982CA: fstp    dword ptr [edi+15Ch]
0x6982D0: call    sub_7F2EC0
0x6982D5: mov     ecx, ebx; this
0x6982D7: call    MobileObject_GetCharProxy
0x6982DC: lea     edx, [esp+64h+var_30]
0x6982E0: push    edx
0x6982E1: mov     ecx, eax
0x6982E3: call    sub_891440
0x6982E8: lea     eax, [esp+64h+var_30]
0x6982EC: push    eax
0x6982ED: lea     ecx, [esp+68h+var_48]
0x6982F1: push    ecx
0x6982F2: call    sub_43F3E0
0x6982F7: mov     ecx, [ebx+98h]
0x6982FD: add     esp, 8
0x698300: test    ecx, ecx
0x698302: mov     [esp+64h+var_34], 0
0x69830A: jz      short loc_69832C
0x69830C: mov     edx, [ecx]
0x69830E: mov     eax, [edx+154h]
0x698314: call    eax
0x698316: test    eax, eax
0x698318: jz      short loc_69832C
0x69831A: mov     edx, [eax]
0x69831C: mov     ecx, eax
0x69831E: mov     eax, [edx+58h]
0x698321: push    offset aBip01Spine2; "Bip01 Spine2"
0x698326: call    eax
0x698328: mov     [esp+64h+var_34], eax
0x69832C: mov     ecx, [esp+64h+var_4C]
0x698330: mov     edx, [ecx]
0x698332: mov     eax, [edx+4]
0x698335: call    eax
0x698337: mov     edx, [eax]
0x698339: mov     ecx, eax
0x69833B: mov     eax, [edx+154h]
0x698341: call    eax
0x698343: mov     esi, eax
0x698345: test    esi, esi
0x698347: jz      loc_6983E5
0x69834D: mov     edx, [esi]
0x69834F: mov     eax, [edx+58h]
0x698352: push    offset aBip01Spine2; "Bip01 Spine2"
0x698357: mov     ecx, esi
0x698359: call    eax
0x69835B: test    eax, eax
0x69835D: mov     [esp+64h+var_4C], eax
0x698361: jnz     short loc_698367
0x698363: mov     [esp+64h+var_4C], esi
0x698367: push    20h ; ' '; Size
0x698369: call    FormHeapAlloc
0x69836E: xor     esi, esi
0x698370: add     esp, 4
0x698373: cmp     eax, esi
0x698375: jz      short loc_698384
0x698377: mov     [eax], esi
0x698379: mov     [eax+4], esi
0x69837C: mov     [eax+14h], esi
0x69837F: mov     [eax+18h], esi
0x698382: mov     esi, eax
0x698384: push    edi; a2
0x698385: mov     ecx, esi; this
0x698387: call    NiSmartPointer_Set??
0x69838C: mov     ecx, [esp+64h+a2]
0x698390: push    ecx; a2
0x698391: lea     ecx, [esi+4]; this
0x698394: call    NiSmartPointer_Set??
0x698399: mov     edx, [esp+64h+var_34]
0x69839D: push    edx; a2
0x69839E: lea     ecx, [esi+14h]; this
0x6983A1: call    NiSmartPointer_Set??
0x6983A6: mov     eax, [esp+64h+var_4C]
0x6983AA: push    eax; a2
0x6983AB: lea     ecx, [esi+18h]; this
0x6983AE: call    NiSmartPointer_Set??
0x6983B3: fldz
0x6983B5: mov     ecx, [esp+64h+var_48]
0x6983B9: mov     edx, [esp+64h+var_44]
0x6983BD: mov     eax, [esp+64h+var_40]
0x6983C1: mov     [esi+8], ecx
0x6983C4: mov     [esi+0Ch], edx
0x6983C7: mov     [esi+10h], eax
0x6983CA: mov     ecx, [ebx+84h]
0x6983D0: push    esi; int
0x6983D1: push    ecx
0x6983D2: mov     [esi+1Ch], ecx
0x6983D5: fstp    [esp+6Ch+var_6C]; float
0x6983D8: mov     ecx, ebx
0x6983DA: call    sub_696460
0x6983DF: mov     [ebx+84h], esi
0x6983E5: mov     ecx, dword ptr [esp+64h+var_C]
0x6983E9: mov     large fs:0, ecx
0x6983F0: pop     ecx
0x6983F1: pop     edi
0x6983F2: pop     esi
0x6983F3: pop     ebx
0x6983F4: mov     ecx, [esp+54h+var_14]
0x6983F8: xor     ecx, esp
0x6983FA: call    @__security_check_cookie@4; __security_check_cookie(x)
0x6983FF: mov     esp, ebp
0x698401: pop     ebp
0x698402: retn    8
