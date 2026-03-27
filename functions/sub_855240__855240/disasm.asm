0x855240: sub     esp, 48h
0x855243: push    ebx
0x855244: push    ebp
0x855245: push    esi
0x855246: mov     esi, ecx
0x855248: mov     eax, [esi+1Ch]
0x85524B: xor     ebx, ebx
0x85524D: test    al, 1
0x85524F: setnbe  cl
0x855252: test    al, 10h
0x855254: setnbe  dl
0x855257: test    cl, cl
0x855259: push    edi
0x85525A: movzx   edi, word ptr ds:0B42EACh
0x855261: mov     [esp+58h+var_2C], ebx
0x855265: mov     byte ptr [esp+58h+var_24], cl
0x855269: mov     byte ptr [esp+58h+var_28], dl
0x85526D: jnz     short loc_855277
0x85526F: test    dl, dl
0x855271: mov     byte ptr [esp+58h+var_48+2], bl
0x855275: jz      short loc_85527C
0x855277: mov     byte ptr [esp+58h+var_48+2], 1
0x85527C: test    eax, 80h
0x855281: setnbe  byte ptr [esp+58h+var_44+1]
0x855286: test    al, 8
0x855288: setnbe  byte ptr [esp+58h+var_30]
0x85528D: test    al, 2
0x85528F: setnbe  byte ptr [esp+58h+var_10]
0x855294: test    al, 20h
0x855296: ja      short loc_8552A2
0x855298: cmp     di, 3
0x85529C: mov     byte ptr [esp+58h+var_48+3], bl
0x8552A0: jnz     short loc_8552A7
0x8552A2: mov     byte ptr [esp+58h+var_48+3], 1
0x8552A7: mov     ecx, [esi+0C4h]
0x8552AD: cmp     [ecx], ebx
0x8552AF: mov     edi, [esp+58h+arg_0]
0x8552B3: setnz   byte ptr [esp+58h+var_18]
0x8552B8: test    eax, 400h
0x8552BD: mov     eax, [edi+0B4h]
0x8552C3: setnbe  dl
0x8552C6: cmp     [eax+24h], ebx
0x8552C9: mov     byte ptr [esp+58h+var_14], dl
0x8552CD: mov     edx, [esi]
0x8552CF: mov     eax, [edx+4]
0x8552D2: setnz   cl
0x8552D5: mov     byte ptr [esp+58h+var_20], cl
0x8552D9: mov     ecx, esi
0x8552DB: call    eax
0x8552DD: test    eax, eax
0x8552DF: jz      short loc_8552F3
0x8552E1: cmp     eax, offset unk_B468C8
0x8552E6: jz      loc_8553F3
0x8552EC: mov     eax, [eax+4]
0x8552EF: test    eax, eax
0x8552F1: jnz     short loc_8552E1
0x8552F3: xor     al, al
0x8552F5: mov     edx, [esi]
0x8552F7: neg     al
0x8552F9: sbb     eax, eax
0x8552FB: and     eax, esi
0x8552FD: mov     eax, [edx+4]
0x855300: setnz   cl
0x855303: mov     byte ptr [esp+58h+var_38], cl
0x855307: mov     ecx, esi
0x855309: call    eax
0x85530B: test    eax, eax
0x85530D: jz      short loc_855322
0x85530F: nop
0x855310: cmp     eax, offset unk_B478B0
0x855315: jz      loc_8553FA
0x85531B: mov     eax, [eax+4]
0x85531E: test    eax, eax
0x855320: jnz     short loc_855310
0x855322: xor     al, al
0x855324: mov     edx, [esi]
0x855326: neg     al
0x855328: mov     ecx, esi
0x85532A: sbb     eax, eax
0x85532C: and     eax, esi
0x85532E: mov     eax, [edx+4]
0x855331: setnz   byte ptr [esp+58h+var_40+2]
0x855336: call    eax
0x855338: test    eax, eax
0x85533A: jz      short loc_855352
0x85533C: lea     esp, [esp+0]
0x855340: cmp     eax, offset unk_B468BC
0x855345: jz      loc_855401
0x85534B: mov     eax, [eax+4]
0x85534E: test    eax, eax
0x855350: jnz     short loc_855340
0x855352: xor     al, al
0x855354: neg     al
0x855356: sbb     eax, eax
0x855358: and     eax, esi
0x85535A: mov     eax, [esi+1Ch]
0x85535D: setnz   byte ptr [esp+58h+var_40+3]
0x855362: test    eax, 4000h
0x855367: setnbe  byte ptr [esp+58h+var_44+2]
0x85536C: test    eax, 8000h
0x855371: setnbe  byte ptr [esp+58h+var_40+1]
0x855376: test    eax, 10000h
0x85537B: setnbe  byte ptr [esp+58h+var_3C]
0x855380: call    InitBSShaderAccumulator
0x855385: mov     ecx, eax
0x855387: call    sub_7AA380
0x85538C: mov     byte ptr [esp+58h+var_40], al
0x855390: mov     eax, [esi+1Ch]
0x855393: test    eax, 100000h
0x855398: jbe     short loc_8553A6
0x85539A: cmp     ds:0B42E86h, bl
0x8553A0: mov     byte ptr [esp+58h+var_44+3], bl
0x8553A4: jz      short loc_8553AB
0x8553A6: mov     byte ptr [esp+58h+var_44+3], 1
0x8553AB: test    eax, 40000h
0x8553B0: setnbe  cl
0x8553B3: mov     byte ptr [esp+58h+var_C], cl
0x8553B7: push    0
0x8553B9: mov     ecx, edi
0x8553BB: call    NiNode_GetNiPropertyByID
0x8553C0: test    eax, eax
0x8553C2: mov     [esp+58h+var_8], eax
0x8553C6: jz      short loc_8553DA
0x8553C8: mov     dx, [eax+18h]
0x8553CC: shr     dx, 9
0x8553D0: test    dl, 1
0x8553D3: mov     byte ptr [esp+58h+var_1C], 1
0x8553D8: jnz     short loc_8553DE
0x8553DA: mov     byte ptr [esp+58h+var_1C], bl
0x8553DE: fldz
0x8553E0: fcom    dword ptr [esi+0A4h]
0x8553E6: fnstsw  ax
0x8553E8: test    ah, 44h
0x8553EB: jp      short loc_855408
0x8553ED: mov     byte ptr [esp+58h+var_44+1], bl
0x8553F1: jmp     short loc_85541A
0x8553F3: mov     al, 1
0x8553F5: jmp     loc_8552F5
0x8553FA: mov     al, 1
0x8553FC: jmp     loc_855324
0x855401: mov     al, 1
0x855403: jmp     loc_855354
0x855408: test    dword ptr [esi+1Ch], 20000h
0x85540F: jbe     short loc_85541A
0x855411: mov     byte ptr [esp+58h+var_44+1], 1
0x855416: mov     byte ptr [esp+58h+var_48+2], bl
0x85541A: fcomp   dword ptr [esi+9Ch]
0x855420: fnstsw  ax
0x855422: test    ah, 44h
0x855425: jp      short loc_85542B
0x855427: mov     byte ptr [esp+58h+var_48+2], bl
0x85542B: mov     eax, [esi+1Ch]
0x85542E: shr     eax, 1Ch
0x855431: movzx   eax, al
0x855434: push    eax
0x855435: call    GetShadowSceneNode
0x85543A: mov     eax, [eax+118h]
0x855440: add     esp, 4
0x855443: cmp     byte ptr [esp+58h+var_48+2], bl
0x855447: mov     [esp+58h+var_34], eax
0x85544B: jz      short loc_85547C
0x85544D: lea     ecx, [esp+58h+var_4]
0x855451: push    ecx
0x855452: mov     ecx, eax
0x855454: call    sub_405AD0
0x855459: mov     ecx, [eax]
0x85545B: mov     ebx, 1
0x855460: push    offset dword_B3FA90
0x855465: add     ecx, 0F8h ; 'ø'
0x85546B: mov     [esp+5Ch+var_2C], ebx
0x85546F: call    sub_8AA390
0x855474: test    al, al
0x855476: mov     byte ptr [esp+58h+var_44], bl
0x85547A: jnz     short loc_855481
0x85547C: mov     byte ptr [esp+58h+var_44], 0
0x855481: test    bl, 1
0x855484: jz      short loc_8554B1
0x855486: mov     edi, [esp+58h+var_4]
0x85548A: and     ebx, 0FFFFFFFEh
0x85548D: test    edi, edi
0x85548F: mov     [esp+58h+var_2C], ebx
0x855493: jz      short loc_8554B1
0x855495: lea     edx, [edi+4]
0x855498: push    edx; lpAddend
0x855499: call    dword ptr ds:0A2807Ch
0x85549F: test    eax, eax
0x8554A1: jnz     short loc_8554B1
0x8554A3: test    edi, edi
0x8554A5: jz      short loc_8554B1
0x8554A7: mov     eax, [edi]
0x8554A9: mov     edx, [eax]
0x8554AB: push    1
0x8554AD: mov     ecx, edi
0x8554AF: call    edx
0x8554B1: fld1
0x8554B3: mov     edi, [esp+58h+arg_8]
0x8554B7: fcomp   dword ptr [esi+20h]
0x8554BA: mov     ebp, [esp+58h+arg_C]
0x8554BE: mov     ebx, [esp+58h+var_10]
0x8554C2: fnstsw  ax
0x8554C4: test    ah, 41h
0x8554C7: jz      short loc_8554D7
0x8554C9: mov     eax, [esp+58h+var_8]
0x8554CD: test    eax, eax
0x8554CF: jz      short loc_855501
0x8554D1: test    byte ptr [eax+18h], 1
0x8554D5: jz      short loc_855501
0x8554D7: cmp     byte ptr [esp+58h+var_40], 0
0x8554DC: mov     byte ptr [esp+58h+arg_8], 1
0x8554E1: jz      short loc_8554FC
0x8554E3: mov     ecx, [esp+58h+arg_0]
0x8554E7: push    ebx
0x8554E8: lea     eax, [esp+5Ch+arg_8]
0x8554EC: push    eax
0x8554ED: push    ebp
0x8554EE: push    edi
0x8554EF: push    ecx
0x8554F0: mov     ecx, esi
0x8554F2: call    sub_854E90
0x8554F7: mov     byte ptr [esp+58h+var_48+2], 0
0x8554FC: mov     byte ptr [esp+58h+var_48+3], 1
0x855501: cmp     byte ptr [esp+58h+var_40+1], 0
0x855506: mov     byte ptr [esp+58h+arg_8], 1
0x85550B: jnz     short loc_855514
0x85550D: cmp     byte ptr [esp+58h+var_3C], 0
0x855512: jz      short loc_85552D
0x855514: mov     edx, [esp+58h+var_3C]
0x855518: mov     ecx, [esp+58h+arg_0]
0x85551C: push    edx
0x85551D: push    ebx
0x85551E: lea     eax, [esp+60h+arg_8]
0x855522: push    eax
0x855523: push    ebp
0x855524: push    edi
0x855525: push    ecx
0x855526: mov     ecx, esi
0x855528: call    sub_854CD0
0x85552D: mov     ecx, esi
0x85552F: call    sub_7ED600
0x855534: cmp     byte ptr [esp+58h+var_44+3], 0
0x855539: movzx   eax, ax
0x85553C: jz      loc_855A32
0x855542: mov     cl, byte ptr [esp+58h+var_48+3]
0x855546: test    cl, cl
0x855548: jnz     short loc_855569
0x85554A: cmp     [esp+58h+arg_4], 0Fh
0x85554F: jnz     loc_855A32
0x855555: cmp     byte ptr [esp+58h+var_30], cl
0x855559: jnz     loc_855A32
0x85555F: cmp     byte ptr [esp+58h+var_44+2], cl
0x855563: jnz     loc_8558F9
0x855569: cmp     ax, 1
0x85556D: jb      loc_855946
0x855573: test    cl, cl
0x855575: jnz     loc_855950
0x85557B: mov     ecx, esi
0x85557D: call    sub_7ED2A0
0x855582: cmp     byte ptr [esp+58h+var_1C], 0
0x855587: mov     [esp+58h+var_3C], eax
0x85558B: jnz     short loc_8555C4
0x85558D: cmp     byte ptr [esp+58h+var_10], 0
0x855592: jnz     short loc_8555C4
0x855594: cmp     byte ptr [esp+58h+var_18], 0
0x855599: jnz     short loc_8555C4
0x85559B: mov     edx, [esp+58h+var_38]
0x85559F: mov     ecx, [esp+58h+var_3C]
0x8555A3: push    edx
0x8555A4: mov     edx, [esp+5Ch+var_34]
0x8555A8: push    0
0x8555AA: lea     eax, [esp+60h+arg_8]
0x8555AE: push    eax
0x8555AF: mov     eax, [esp+64h+arg_0]
0x8555B3: push    ebp
0x8555B4: push    edi
0x8555B5: push    ecx
0x8555B6: push    edx
0x8555B7: push    eax
0x8555B8: mov     ecx, esi
0x8555BA: call    sub_853580
0x8555BF: jmp     loc_8556A5
0x8555C4: test    byte ptr [esp+58h+arg_4], 1
0x8555C9: jz      short loc_8555F3
0x8555CB: mov     ecx, [esp+58h+var_38]
0x8555CF: mov     edx, [esp+58h+var_18]
0x8555D3: mov     eax, [esp+58h+var_1C]
0x8555D7: push    ecx
0x8555D8: push    edx
0x8555D9: mov     edx, [esp+60h+var_34]
0x8555DD: push    eax
0x8555DE: mov     eax, [esp+64h+arg_0]
0x8555E2: push    ebx
0x8555E3: lea     ecx, [esp+68h+arg_8]
0x8555E7: push    ecx
0x8555E8: push    ebp
0x8555E9: push    edi
0x8555EA: push    edx
0x8555EB: push    eax
0x8555EC: mov     ecx, esi
0x8555EE: call    sub_852150
0x8555F3: lea     ecx, [esp+58h+var_4]
0x8555F7: push    ecx
0x8555F8: mov     ecx, [esp+5Ch+var_34]
0x8555FC: call    sub_405AD0
0x855601: mov     ecx, [eax]
0x855603: push    offset dword_B3FA90
0x855608: add     ecx, 0ECh ; 'ì'
0x85560E: call    sub_8AA390
0x855613: lea     ecx, [esp+58h+var_4]; this
0x855617: mov     byte ptr [esp+58h+arg_C], al
0x85561B: call    sub_7016A0
0x855620: cmp     byte ptr [esp+58h+arg_C], 0
0x855625: jz      short loc_85564C
0x855627: mov     edx, [esp+58h+var_38]
0x85562B: mov     eax, [esp+58h+var_30]
0x85562F: push    edx
0x855630: mov     edx, [esp+5Ch+var_34]
0x855634: push    eax
0x855635: mov     eax, [esp+60h+arg_0]
0x855639: push    0
0x85563B: push    ebx
0x85563C: lea     ecx, [esp+68h+arg_8]
0x855640: push    ecx
0x855641: push    ebp
0x855642: push    edi
0x855643: push    edx
0x855644: push    eax
0x855645: mov     ecx, esi
0x855647: call    sub_853720
0x85564C: lea     ecx, [esp+58h+var_4]
0x855650: push    ecx
0x855651: mov     ecx, [esp+5Ch+var_3C]
0x855655: call    sub_405AD0
0x85565A: mov     ecx, [eax]
0x85565C: push    offset dword_B3FA90
0x855661: add     ecx, 0ECh ; 'ì'
0x855667: call    sub_8AA390
0x85566C: lea     ecx, [esp+58h+var_4]; this
0x855670: mov     byte ptr [esp+58h+arg_C], al
0x855674: call    sub_7016A0
0x855679: cmp     byte ptr [esp+58h+arg_C], 0
0x85567E: jz      short loc_8556A5
0x855680: mov     edx, [esp+58h+var_38]
0x855684: mov     eax, [esp+58h+var_30]
0x855688: push    edx
0x855689: mov     edx, [esp+5Ch+var_3C]
0x85568D: push    eax
0x85568E: mov     eax, [esp+60h+arg_0]
0x855692: push    1
0x855694: push    ebx
0x855695: lea     ecx, [esp+68h+arg_8]
0x855699: push    ecx
0x85569A: push    ebp
0x85569B: push    edi
0x85569C: push    edx
0x85569D: push    eax
0x85569E: mov     ecx, esi
0x8556A0: call    sub_853720
0x8556A5: mov     ecx, esi
0x8556A7: call    sub_7ED4B0
0x8556AC: test    eax, eax
0x8556AE: mov     [esp+58h+var_3C], eax
0x8556B2: jz      loc_85574F
0x8556B8: jmp     short loc_8556C0
0x8556BA: align 10h
0x8556C0: lea     ecx, [esp+58h+var_4]
0x8556C4: push    ecx
0x8556C5: mov     ecx, [esp+5Ch+var_3C]
0x8556C9: call    sub_405AD0
0x8556CE: mov     ecx, [eax]
0x8556D0: push    offset dword_B3FA90
0x8556D5: add     ecx, 0ECh ; 'ì'
0x8556DB: call    sub_8AA390
0x8556E0: mov     byte ptr [esp+58h+arg_C], al
0x8556E4: mov     eax, [esp+58h+var_4]
0x8556E8: test    eax, eax
0x8556EA: jz      short loc_855710
0x8556EC: mov     [esp+58h+var_10], eax
0x8556F0: add     eax, 4
0x8556F3: push    eax; lpAddend
0x8556F4: call    dword ptr ds:0A2807Ch
0x8556FA: test    eax, eax
0x8556FC: jnz     short loc_855710
0x8556FE: cmp     [esp+58h+var_10], eax
0x855702: jz      short loc_855710
0x855704: mov     ecx, [esp+58h+var_10]
0x855708: mov     edx, [ecx]
0x85570A: mov     eax, [edx]
0x85570C: push    1
0x85570E: call    eax
0x855710: cmp     byte ptr [esp+58h+arg_C], 0
0x855715: jz      short loc_85573C
0x855717: mov     ecx, [esp+58h+var_38]
0x85571B: mov     edx, [esp+58h+var_30]
0x85571F: push    ecx
0x855720: mov     ecx, [esp+5Ch+var_3C]
0x855724: push    edx
0x855725: mov     edx, [esp+60h+arg_0]
0x855729: push    1
0x85572B: push    ebx
0x85572C: lea     eax, [esp+68h+arg_8]
0x855730: push    eax
0x855731: push    ebp
0x855732: push    edi
0x855733: push    ecx
0x855734: push    edx
0x855735: mov     ecx, esi
0x855737: call    sub_853720
0x85573C: mov     ecx, esi
0x85573E: call    sub_7ED4B0
0x855743: test    eax, eax
0x855745: mov     [esp+58h+var_3C], eax
0x855749: jnz     loc_8556C0
0x85574F: mov     eax, [esp+58h+var_C]
0x855753: mov     ecx, [esp+58h+var_38]
0x855757: mov     edx, [esp+58h+var_20]
0x85575B: push    eax
0x85575C: mov     eax, [esp+5Ch+var_14]
0x855760: push    ecx
0x855761: mov     ecx, [esp+60h+var_30]
0x855765: push    edx
0x855766: push    eax
0x855767: mov     eax, [esp+68h+var_34]
0x85576B: push    ecx
0x85576C: mov     ecx, [esp+6Ch+arg_0]
0x855770: push    ebx
0x855771: lea     edx, [esp+70h+arg_8]
0x855775: push    edx
0x855776: push    ebp
0x855777: push    edi
0x855778: push    eax
0x855779: push    ecx
0x85577A: mov     ecx, esi
0x85577C: call    sub_853970
0x855781: cmp     byte ptr [esp+58h+var_48+2], 0
0x855786: jz      loc_8558D2
0x85578C: mov     ecx, esi
0x85578E: call    sub_7ED2A0
0x855793: cmp     byte ptr [esp+58h+var_44], 0
0x855798: mov     [esp+58h+var_3C], eax
0x85579C: jz      short loc_8557CC
0x85579E: mov     ecx, [esp+58h+var_34]
0x8557A2: lea     edx, [esp+58h+var_4]
0x8557A6: push    edx
0x8557A7: call    sub_405AD0
0x8557AC: mov     ecx, [eax]
0x8557AE: or      [esp+58h+var_2C], 2
0x8557B3: push    offset dword_B3FA90
0x8557B8: add     ecx, 0ECh ; 'ì'
0x8557BE: call    sub_8AA390
0x8557C3: test    al, al
0x8557C5: mov     byte ptr [esp+58h+arg_C], 1
0x8557CA: jnz     short loc_8557D1
0x8557CC: mov     byte ptr [esp+58h+arg_C], 0
0x8557D1: test    byte ptr [esp+58h+var_2C], 2
0x8557D6: jz      short loc_8557E1
0x8557D8: lea     ecx, [esp+58h+var_4]; this
0x8557DC: call    sub_7016A0
0x8557E1: cmp     byte ptr [esp+58h+arg_C], 0
0x8557E6: jz      short loc_855819
0x8557E8: mov     eax, [esp+58h+var_38]
0x8557EC: mov     ecx, [esp+58h+var_28]
0x8557F0: mov     edx, [esp+58h+var_24]
0x8557F4: push    eax
0x8557F5: mov     eax, [esp+5Ch+var_30]
0x8557F9: push    ecx
0x8557FA: push    edx
0x8557FB: mov     edx, [esp+64h+var_34]
0x8557FF: push    eax
0x855800: mov     eax, [esp+68h+arg_0]
0x855804: push    0
0x855806: push    ebx
0x855807: lea     ecx, [esp+70h+arg_8]
0x85580B: push    ecx
0x85580C: push    ebp
0x85580D: push    edi
0x85580E: push    edx
0x85580F: push    eax
0x855810: mov     ecx, esi
0x855812: call    sub_853DC0
0x855817: jmp     short loc_855853
0x855819: mov     ecx, [esp+58h+var_38]
0x85581D: mov     edx, [esp+58h+var_28]
0x855821: mov     eax, [esp+58h+var_24]
0x855825: push    ecx
0x855826: mov     ecx, [esp+5Ch+var_30]
0x85582A: push    edx
0x85582B: push    eax
0x85582C: mov     eax, [esp+64h+var_3C]
0x855830: push    ecx
0x855831: mov     ecx, [esp+68h+arg_0]
0x855835: push    1
0x855837: push    ebx
0x855838: lea     edx, [esp+70h+arg_8]
0x85583C: push    edx
0x85583D: push    ebp
0x85583E: push    edi
0x85583F: push    eax
0x855840: push    ecx
0x855841: mov     ecx, esi
0x855843: call    sub_853DC0
0x855848: mov     ecx, esi
0x85584A: call    sub_7ED4B0
0x85584F: mov     [esp+58h+var_3C], eax
0x855853: cmp     [esp+58h+var_3C], 0
0x855858: jz      short loc_8558D2
0x85585A: lea     ebx, [ebx+0]
0x855860: mov     ecx, [esp+58h+var_3C]
0x855864: lea     edx, [esp+58h+var_4]
0x855868: push    edx
0x855869: call    sub_405AD0
0x85586E: mov     ecx, [eax]
0x855870: push    offset dword_B3FA90
0x855875: add     ecx, 0ECh ; 'ì'
0x85587B: call    sub_8AA390
0x855880: lea     ecx, [esp+58h+var_4]; this
0x855884: mov     byte ptr [esp+58h+arg_C], al
0x855888: call    sub_7016A0
0x85588D: cmp     byte ptr [esp+58h+arg_C], 0
0x855892: jz      short loc_8558C3
0x855894: mov     eax, [esp+58h+var_38]
0x855898: mov     ecx, [esp+58h+var_28]
0x85589C: mov     edx, [esp+58h+var_24]
0x8558A0: push    eax
0x8558A1: mov     eax, [esp+5Ch+var_30]
0x8558A5: push    ecx
0x8558A6: push    edx
0x8558A7: mov     edx, [esp+64h+var_3C]
0x8558AB: push    eax
0x8558AC: mov     eax, [esp+68h+arg_0]
0x8558B0: push    1
0x8558B2: push    ebx
0x8558B3: lea     ecx, [esp+70h+arg_8]
0x8558B7: push    ecx
0x8558B8: push    ebp
0x8558B9: push    edi
0x8558BA: push    edx
0x8558BB: push    eax
0x8558BC: mov     ecx, esi
0x8558BE: call    sub_853DC0
0x8558C3: mov     ecx, esi
0x8558C5: call    sub_7ED4B0
0x8558CA: test    eax, eax
0x8558CC: mov     [esp+58h+var_3C], eax
0x8558D0: jnz     short loc_855860
0x8558D2: cmp     byte ptr [esp+58h+var_44+1], 0
0x8558D7: jz      short loc_8558F2
0x8558D9: mov     ecx, [esp+58h+var_20]
0x8558DD: mov     eax, [esp+58h+arg_0]
0x8558E1: push    ecx
0x8558E2: push    ebx
0x8558E3: lea     edx, [esp+60h+arg_8]
0x8558E7: push    edx
0x8558E8: push    ebp
0x8558E9: push    edi
0x8558EA: push    eax
0x8558EB: mov     ecx, esi
0x8558ED: call    sub_853F80
0x8558F2: cmp     byte ptr [esp+58h+var_44+2], 0
0x8558F7: jz      short loc_855913
0x8558F9: mov     eax, [esp+58h+var_34]
0x8558FD: mov     ecx, [esp+58h+arg_0]
0x855901: push    0
0x855903: lea     edx, [esp+5Ch+arg_8]
0x855907: push    edx
0x855908: push    ebp
0x855909: push    edi
0x85590A: push    eax
0x85590B: push    ecx
0x85590C: mov     ecx, esi
0x85590E: call    sub_854380
0x855913: cmp     [esp+58h+arg_4], 0Fh
0x855918: jnz     loc_855E2E
0x85591E: cmp     byte ptr [esp+58h+var_48+3], 0
0x855923: jnz     loc_855E2E
0x855929: mov     eax, [esp+58h+var_8]
0x85592D: test    eax, eax
0x85592F: jz      loc_855E12
0x855935: test    byte ptr [eax+18h], 1
0x855939: jz      loc_855E12
0x85593F: mov     al, 1
0x855941: jmp     loc_855E14
0x855946: test    cl, cl
0x855948: jnz     short loc_855950
0x85594A: cmp     byte ptr [esp+58h+var_44], cl
0x85594E: jnz     short loc_85599C
0x855950: cmp     byte ptr [esp+58h+var_40+2], 0
0x855955: jnz     short loc_85599C
0x855957: cmp     byte ptr [esp+58h+var_40+3], 0
0x85595C: jnz     short loc_85599C
0x85595E: mov     ecx, [esp+58h+var_38]
0x855962: mov     edx, [esp+58h+var_20]
0x855966: mov     eax, [esp+58h+var_14]
0x85596A: push    ecx
0x85596B: mov     ecx, [esp+5Ch+var_18]
0x85596F: push    edx
0x855970: mov     edx, [esp+60h+var_1C]
0x855974: push    1
0x855976: push    eax
0x855977: push    ecx
0x855978: mov     ecx, [esp+6Ch+var_34]
0x85597C: push    edx
0x85597D: mov     edx, [esp+70h+arg_0]
0x855981: push    ebx
0x855982: lea     eax, [esp+74h+arg_8]
0x855989: push    eax
0x85598A: push    ebp
0x85598B: push    edi
0x85598C: push    ecx
0x85598D: push    edx
0x85598E: mov     ecx, esi
0x855990: call    sub_852470
0x855995: mov     byte ptr [esp+58h+var_48+3], 1
0x85599A: jmp     short loc_8559D3
0x85599C: mov     eax, [esp+58h+var_38]
0x8559A0: mov     ecx, [esp+58h+var_20]
0x8559A4: mov     edx, [esp+58h+var_14]
0x8559A8: push    eax
0x8559A9: mov     eax, [esp+5Ch+var_18]
0x8559AD: push    ecx
0x8559AE: mov     ecx, [esp+60h+var_1C]
0x8559B2: push    0
0x8559B4: push    edx
0x8559B5: push    eax
0x8559B6: mov     eax, [esp+6Ch+var_34]
0x8559BA: push    ecx
0x8559BB: mov     ecx, [esp+70h+arg_0]
0x8559BF: push    ebx
0x8559C0: lea     edx, [esp+74h+arg_8]
0x8559C7: push    edx
0x8559C8: push    ebp
0x8559C9: push    edi
0x8559CA: push    eax
0x8559CB: push    ecx
0x8559CC: mov     ecx, esi
0x8559CE: call    sub_852470
0x8559D3: cmp     byte ptr [esp+58h+var_44], 0
0x8559D8: jz      short loc_855A10
0x8559DA: cmp     byte ptr [esp+58h+var_48+3], 0
0x8559DF: jnz     short loc_855A10
0x8559E1: mov     edx, [esp+58h+var_38]
0x8559E5: mov     eax, [esp+58h+var_28]
0x8559E9: mov     ecx, [esp+58h+var_24]
0x8559ED: push    edx
0x8559EE: mov     edx, [esp+5Ch+var_30]
0x8559F2: push    eax
0x8559F3: push    ecx
0x8559F4: mov     ecx, [esp+64h+var_34]
0x8559F8: push    edx
0x8559F9: mov     edx, [esp+68h+arg_0]
0x8559FD: push    0
0x8559FF: push    ebx
0x855A00: lea     eax, [esp+70h+arg_8]
0x855A04: push    eax
0x855A05: push    ebp
0x855A06: push    edi
0x855A07: push    ecx
0x855A08: push    edx
0x855A09: mov     ecx, esi
0x855A0B: call    sub_853DC0
0x855A10: cmp     byte ptr [esp+58h+var_44+1], 0
0x855A15: jz      loc_8558F2
0x855A1B: mov     eax, [esp+58h+var_20]
0x855A1F: mov     edx, [esp+58h+arg_0]
0x855A23: push    eax
0x855A24: push    ebx
0x855A25: lea     ecx, [esp+60h+arg_8]
0x855A29: push    ecx
0x855A2A: push    ebp
0x855A2B: push    edi
0x855A2C: push    edx
0x855A2D: jmp     loc_8558EB
0x855A32: cmp     byte ptr [esp+58h+var_44+2], 0
0x855A37: jnz     loc_8558F9
0x855A3D: test    byte ptr [esp+58h+arg_4], 1
0x855A42: mov     byte ptr [esp+58h+arg_8], 1
0x855A47: jz      short loc_855A71
0x855A49: mov     eax, [esp+58h+var_38]
0x855A4D: mov     ecx, [esp+58h+var_18]
0x855A51: mov     edx, [esp+58h+var_1C]
0x855A55: push    eax
0x855A56: push    ecx
0x855A57: mov     ecx, [esp+60h+var_34]
0x855A5B: push    edx
0x855A5C: mov     edx, [esp+64h+arg_0]
0x855A60: push    ebx
0x855A61: lea     eax, [esp+68h+arg_8]
0x855A65: push    eax
0x855A66: push    ebp
0x855A67: push    edi
0x855A68: push    ecx
0x855A69: push    edx
0x855A6A: mov     ecx, esi
0x855A6C: call    sub_852150
0x855A71: mov     ecx, [esp+58h+arg_0]
0x855A75: push    0
0x855A77: call    NiNode_GetNiPropertyByID
0x855A7C: test    byte ptr [esp+58h+arg_4], 2
0x855A81: jz      loc_855BE0
0x855A87: mov     ecx, [esp+58h+var_34]
0x855A8B: lea     eax, [esp+58h+var_4]
0x855A8F: push    eax
0x855A90: call    sub_405AD0
0x855A95: mov     ecx, [eax]
0x855A97: push    offset dword_B3FA90
0x855A9C: add     ecx, 0ECh ; 'ì'
0x855AA2: call    sub_8AA390
0x855AA7: mov     byte ptr [esp+58h+arg_C], al
0x855AAB: mov     eax, [esp+58h+var_4]
0x855AAF: test    eax, eax
0x855AB1: jz      short loc_855AD7
0x855AB3: mov     [esp+58h+var_10], eax
0x855AB7: add     eax, 4
0x855ABA: push    eax; lpAddend
0x855ABB: call    dword ptr ds:0A2807Ch
0x855AC1: test    eax, eax
0x855AC3: jnz     short loc_855AD7
0x855AC5: cmp     [esp+58h+var_10], eax
0x855AC9: jz      short loc_855AD7
0x855ACB: mov     ecx, [esp+58h+var_10]
0x855ACF: mov     edx, [ecx]
0x855AD1: mov     eax, [edx]
0x855AD3: push    1
0x855AD5: call    eax
0x855AD7: cmp     byte ptr [esp+58h+arg_C], 0
0x855ADC: jz      short loc_855B03
0x855ADE: mov     ecx, [esp+58h+var_38]
0x855AE2: mov     edx, [esp+58h+var_30]
0x855AE6: push    ecx
0x855AE7: mov     ecx, [esp+5Ch+var_34]
0x855AEB: push    edx
0x855AEC: mov     edx, [esp+60h+arg_0]
0x855AF0: push    0
0x855AF2: push    ebx
0x855AF3: lea     eax, [esp+68h+arg_8]
0x855AF7: push    eax
0x855AF8: push    ebp
0x855AF9: push    edi
0x855AFA: push    ecx
0x855AFB: push    edx
0x855AFC: mov     ecx, esi
0x855AFE: call    sub_853720
0x855B03: mov     ecx, esi
0x855B05: call    sub_7ED2A0
0x855B0A: test    eax, eax
0x855B0C: mov     [esp+58h+var_3C], eax
0x855B10: jz      loc_855BE0
0x855B16: mov     ecx, [esp+58h+var_3C]
0x855B1A: lea     eax, [esp+58h+var_4]
0x855B1E: push    eax
0x855B1F: call    sub_405AD0
0x855B24: mov     ecx, [eax]
0x855B26: fld     dword ptr [ecx+0ECh]
0x855B2C: add     ecx, 0ECh ; 'ì'
0x855B32: fld     dword ptr ds:0B3FA90h
0x855B38: fucompp
0x855B3A: fnstsw  ax
0x855B3C: test    ah, 44h
0x855B3F: jp      short loc_855B6C
0x855B41: fld     dword ptr [ecx+4]
0x855B44: fld     dword ptr ds:0B3FA94h
0x855B4A: fucompp
0x855B4C: fnstsw  ax
0x855B4E: test    ah, 44h
0x855B51: jp      short loc_855B6C
0x855B53: fld     dword ptr [ecx+8]
0x855B56: fld     dword ptr ds:0B3FA98h
0x855B5C: fucompp
0x855B5E: fnstsw  ax
0x855B60: test    ah, 44h
0x855B63: jp      short loc_855B6C
0x855B65: mov     eax, 1
0x855B6A: jmp     short loc_855B6E
0x855B6C: xor     eax, eax
0x855B6E: test    al, al
0x855B70: mov     eax, [esp+58h+var_4]
0x855B74: setz    byte ptr [esp+58h+arg_C]
0x855B79: test    eax, eax
0x855B7B: jz      short loc_855BA1
0x855B7D: mov     [esp+58h+var_10], eax
0x855B81: add     eax, 4
0x855B84: push    eax; lpAddend
0x855B85: call    dword ptr ds:0A2807Ch
0x855B8B: test    eax, eax
0x855B8D: jnz     short loc_855BA1
0x855B8F: cmp     [esp+58h+var_10], eax
0x855B93: jz      short loc_855BA1
0x855B95: mov     ecx, [esp+58h+var_10]
0x855B99: mov     edx, [ecx]
0x855B9B: mov     eax, [edx]
0x855B9D: push    1
0x855B9F: call    eax
0x855BA1: cmp     byte ptr [esp+58h+arg_C], 0
0x855BA6: jz      short loc_855BCD
0x855BA8: mov     ecx, [esp+58h+var_38]
0x855BAC: mov     edx, [esp+58h+var_30]
0x855BB0: push    ecx
0x855BB1: mov     ecx, [esp+5Ch+var_3C]
0x855BB5: push    edx
0x855BB6: mov     edx, [esp+60h+arg_0]
0x855BBA: push    1
0x855BBC: push    ebx
0x855BBD: lea     eax, [esp+68h+arg_8]
0x855BC1: push    eax
0x855BC2: push    ebp
0x855BC3: push    edi
0x855BC4: push    ecx
0x855BC5: push    edx
0x855BC6: mov     ecx, esi
0x855BC8: call    sub_853720
0x855BCD: mov     ecx, esi
0x855BCF: call    sub_7ED4B0
0x855BD4: test    eax, eax
0x855BD6: mov     [esp+58h+var_3C], eax
0x855BDA: jnz     loc_855B16
0x855BE0: test    byte ptr [esp+58h+arg_4], 4
0x855BE5: jz      short loc_855C19
0x855BE7: mov     eax, [esp+58h+var_C]
0x855BEB: mov     ecx, [esp+58h+var_38]
0x855BEF: mov     edx, [esp+58h+var_20]
0x855BF3: push    eax
0x855BF4: mov     eax, [esp+5Ch+var_14]
0x855BF8: push    ecx
0x855BF9: mov     ecx, [esp+60h+var_30]
0x855BFD: push    edx
0x855BFE: push    eax
0x855BFF: mov     eax, [esp+68h+var_34]
0x855C03: push    ecx
0x855C04: mov     ecx, [esp+6Ch+arg_0]
0x855C08: push    ebx
0x855C09: lea     edx, [esp+70h+arg_8]
0x855C0D: push    edx
0x855C0E: push    ebp
0x855C0F: push    edi
0x855C10: push    eax
0x855C11: push    ecx
0x855C12: mov     ecx, esi
0x855C14: call    sub_853970
0x855C19: cmp     byte ptr [esp+58h+var_48+2], 0
0x855C1E: jz      loc_855DDE
0x855C24: test    byte ptr [esp+58h+arg_4], 8
0x855C29: jz      loc_855DDE
0x855C2F: mov     ecx, esi
0x855C31: call    sub_7ED2A0
0x855C36: cmp     byte ptr [esp+58h+var_44], 0
0x855C3B: mov     [esp+58h+var_3C], eax
0x855C3F: jz      short loc_855C6F
0x855C41: mov     ecx, [esp+58h+var_34]
0x855C45: lea     edx, [esp+58h+var_4]
0x855C49: push    edx
0x855C4A: call    sub_405AD0
0x855C4F: mov     ecx, [eax]
0x855C51: or      [esp+58h+var_2C], 4
0x855C56: push    offset dword_B3FA90
0x855C5B: add     ecx, 0ECh ; 'ì'
0x855C61: call    sub_8AA390
0x855C66: test    al, al
0x855C68: mov     byte ptr [esp+58h+arg_C], 1
0x855C6D: jnz     short loc_855C74
0x855C6F: mov     byte ptr [esp+58h+arg_C], 0
0x855C74: test    byte ptr [esp+58h+var_2C], 4
0x855C79: jz      short loc_855C84
0x855C7B: lea     ecx, [esp+58h+var_4]; this
0x855C7F: call    sub_7016A0
0x855C84: cmp     byte ptr [esp+58h+arg_C], 0
0x855C89: jz      short loc_855CC1
0x855C8B: mov     eax, [esp+58h+var_38]
0x855C8F: mov     ecx, [esp+58h+var_28]
0x855C93: mov     edx, [esp+58h+var_24]
0x855C97: push    eax
0x855C98: mov     eax, [esp+5Ch+var_30]
0x855C9C: push    ecx
0x855C9D: push    edx
0x855C9E: mov     edx, [esp+64h+var_34]
0x855CA2: push    eax
0x855CA3: mov     eax, [esp+68h+arg_0]
0x855CA7: push    0
0x855CA9: push    ebx
0x855CAA: lea     ecx, [esp+70h+arg_8]
0x855CAE: push    ecx
0x855CAF: push    ebp
0x855CB0: push    edi
0x855CB1: push    edx
0x855CB2: push    eax
0x855CB3: mov     ecx, esi
0x855CB5: call    sub_853DC0
0x855CBA: mov     byte ptr [esp+58h+arg_8], 0
0x855CBF: jmp     short loc_855D3A
0x855CC1: cmp     [esp+58h+var_3C], 0
0x855CC6: jz      loc_855DDE
0x855CCC: lea     ecx, [esp+58h+var_4]
0x855CD0: push    ecx
0x855CD1: mov     ecx, [esp+5Ch+var_3C]
0x855CD5: call    sub_405AD0
0x855CDA: mov     ecx, [eax]
0x855CDC: push    offset dword_B3FA90
0x855CE1: add     ecx, 0ECh ; 'ì'
0x855CE7: call    sub_8AA390
0x855CEC: lea     ecx, [esp+58h+var_4]; this
0x855CF0: mov     byte ptr [esp+58h+arg_C], al
0x855CF4: call    sub_7016A0
0x855CF9: cmp     byte ptr [esp+58h+arg_C], 0
0x855CFE: jz      short loc_855D3A
0x855D00: mov     edx, [esp+58h+var_38]
0x855D04: mov     eax, [esp+58h+var_28]
0x855D08: mov     ecx, [esp+58h+var_24]
0x855D0C: push    edx
0x855D0D: mov     edx, [esp+5Ch+var_30]
0x855D11: push    eax
0x855D12: push    ecx
0x855D13: mov     ecx, [esp+64h+var_3C]
0x855D17: push    edx
0x855D18: mov     edx, [esp+68h+arg_0]
0x855D1C: push    1
0x855D1E: push    ebx
0x855D1F: lea     eax, [esp+70h+arg_8]
0x855D23: push    eax
0x855D24: push    ebp
0x855D25: push    edi
0x855D26: push    ecx
0x855D27: push    edx
0x855D28: mov     ecx, esi
0x855D2A: call    sub_853DC0
0x855D2F: mov     ecx, esi
0x855D31: call    sub_7ED4B0
0x855D36: mov     [esp+58h+var_3C], eax
0x855D3A: cmp     [esp+58h+var_3C], 0
0x855D3F: jz      loc_855DDE
0x855D45: mov     ecx, [esp+58h+var_3C]
0x855D49: lea     eax, [esp+58h+var_4]
0x855D4D: push    eax
0x855D4E: call    sub_405AD0
0x855D53: mov     ecx, [eax]
0x855D55: push    offset dword_B3FA90
0x855D5A: add     ecx, 0ECh ; 'ì'
0x855D60: call    sub_8AA390
0x855D65: mov     byte ptr [esp+58h+arg_C], al
0x855D69: mov     eax, [esp+58h+var_4]
0x855D6D: test    eax, eax
0x855D6F: jz      short loc_855D95
0x855D71: mov     [esp+58h+var_C], eax
0x855D75: add     eax, 4
0x855D78: push    eax; lpAddend
0x855D79: call    dword ptr ds:0A2807Ch
0x855D7F: test    eax, eax
0x855D81: jnz     short loc_855D95
0x855D83: cmp     [esp+58h+var_C], eax
0x855D87: jz      short loc_855D95
0x855D89: mov     ecx, [esp+58h+var_C]
0x855D8D: mov     edx, [ecx]
0x855D8F: mov     eax, [edx]
0x855D91: push    1
0x855D93: call    eax
0x855D95: cmp     byte ptr [esp+58h+arg_C], 0
0x855D9A: jz      short loc_855DCB
0x855D9C: mov     ecx, [esp+58h+var_38]
0x855DA0: mov     edx, [esp+58h+var_28]
0x855DA4: mov     eax, [esp+58h+var_24]
0x855DA8: push    ecx
0x855DA9: mov     ecx, [esp+5Ch+var_30]
0x855DAD: push    edx
0x855DAE: push    eax
0x855DAF: mov     eax, [esp+64h+var_3C]
0x855DB3: push    ecx
0x855DB4: mov     ecx, [esp+68h+arg_0]
0x855DB8: push    1
0x855DBA: push    ebx
0x855DBB: lea     edx, [esp+70h+arg_8]
0x855DBF: push    edx
0x855DC0: push    ebp
0x855DC1: push    edi
0x855DC2: push    eax
0x855DC3: push    ecx
0x855DC4: mov     ecx, esi
0x855DC6: call    sub_853DC0
0x855DCB: mov     ecx, esi
0x855DCD: call    sub_7ED4B0
0x855DD2: test    eax, eax
0x855DD4: mov     [esp+58h+var_3C], eax
0x855DD8: jnz     loc_855D45
0x855DDE: cmp     byte ptr [esp+58h+var_44+1], 0
0x855DE3: jz      loc_855913
0x855DE9: test    byte ptr [esp+58h+arg_4], 8
0x855DEE: jz      loc_855913
0x855DF4: mov     edx, [esp+58h+var_20]
0x855DF8: mov     ecx, [esp+58h+arg_0]
0x855DFC: push    edx
0x855DFD: push    ebx
0x855DFE: lea     eax, [esp+60h+arg_8]
0x855E02: push    eax
0x855E03: push    ebp
0x855E04: push    edi
0x855E05: push    ecx
0x855E06: mov     ecx, esi
0x855E08: call    sub_853F80
0x855E0D: jmp     loc_855913
0x855E12: xor     al, al
0x855E14: mov     edx, [esp+58h+var_38]
0x855E18: mov     ecx, [esp+58h+arg_0]
0x855E1C: push    eax
0x855E1D: push    edx
0x855E1E: push    ebx
0x855E1F: lea     eax, [esp+64h+arg_8]
0x855E23: push    eax
0x855E24: push    ebp
0x855E25: push    edi
0x855E26: push    ecx
0x855E27: mov     ecx, esi
0x855E29: call    sub_854190
0x855E2E: cmp     dword ptr [esi+0E0h], 0
0x855E35: jz      short loc_855E4B
0x855E37: mov     eax, [esp+58h+arg_0]
0x855E3B: push    ebx
0x855E3C: lea     edx, [esp+5Ch+arg_8]
0x855E40: push    edx
0x855E41: push    ebp
0x855E42: push    edi
0x855E43: push    eax
0x855E44: mov     ecx, esi
0x855E46: call    sub_854B70
0x855E4B: cmp     byte ptr ds:0B43073h, 0
0x855E52: jz      short loc_855E6F
0x855E54: test    byte ptr [esp+58h+arg_4], 1
0x855E59: jz      short loc_855E6F
0x855E5B: mov     ecx, [esp+58h+var_18]
0x855E5F: mov     edx, [esp+58h+arg_0]
0x855E63: push    ecx
0x855E64: push    ebx
0x855E65: push    ebp
0x855E66: push    edi
0x855E67: push    edx
0x855E68: mov     ecx, esi
0x855E6A: call    sub_854FF0
0x855E6F: pop     edi
0x855E70: pop     esi
0x855E71: pop     ebp
0x855E72: pop     ebx
0x855E73: add     esp, 48h
0x855E76: retn    10h
