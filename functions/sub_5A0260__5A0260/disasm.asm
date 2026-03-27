0x5A0260: sub     esp, 58h
0x5A0263: mov     eax, ds:0B30AACh
0x5A0268: xor     eax, esp
0x5A026A: mov     [esp+58h+var_4], eax
0x5A026E: push    ebp; a3
0x5A026F: push    esi; a3
0x5A0270: mov     esi, ecx
0x5A0272: mov     ebp, 2
0x5A0277: cmp     [esi+24h], ebp
0x5A027A: jz      loc_5A08C1
0x5A0280: mov     ecx, [esi+44h]
0x5A0283: push    0FA1h
0x5A0288: call    Tile_GetFloat
0x5A028D: fcomp   dword ptr ds:0A379B4h
0x5A0293: fnstsw  ax
0x5A0295: test    ah, 44h
0x5A0298: jp      short loc_5A02A9
0x5A029A: mov     ecx, [esi+44h]
0x5A029D: push    0FB5h
0x5A02A2: call    Tile_GetFloat
0x5A02A7: jmp     short loc_5A02BC
0x5A02A9: mov     ecx, [esi+94h]
0x5A02AF: call    EffectItem_GetMagnitude
0x5A02B4: mov     dword ptr [esp+60h+var_58+4], eax
0x5A02B8: fild    dword ptr [esp+60h+var_58+4]
0x5A02BC: fstp    dword ptr [esp+60h+var_58+4]
0x5A02C0: push    edi; a3
0x5A02C1: fld     dword ptr [esp+64h+var_58+4]
0x5A02C5: call    Double_To_SInt32
0x5A02CA: cmp     dword ptr [esi+7Ch], 0
0x5A02CE: mov     edi, eax
0x5A02D0: mov     dword ptr [esp+64h+var_58+4], edi
0x5A02D4: jz      short loc_5A034F
0x5A02D6: mov     eax, [esi+7Ch]
0x5A02D9: mov     ecx, [eax+34h]
0x5A02DC: mov     edx, [ecx]
0x5A02DE: mov     eax, [edx+10h]
0x5A02E1: call    eax
0x5A02E3: cmp     eax, 3
0x5A02E6: jnz     short loc_5A034F
0x5A02E8: mov     eax, [esi+7Ch]
0x5A02EB: mov     ecx, [eax+34h]
0x5A02EE: movzx   edx, word ptr [ecx+8]
0x5A02F2: mov     ecx, [esi+94h]
0x5A02F8: mov     ecx, [ecx+1Ch]
0x5A02FB: push    ecx
0x5A02FC: movzx   edx, dx
0x5A02FF: fld     dword ptr [ecx+90h]
0x5A0305: fstp    dword ptr [esp+68h+var_58+4]
0x5A0309: fld     dword ptr [ecx+5Ch]
0x5A030C: mov     ecx, [eax+2Ch]
0x5A030F: fstp    dword ptr [esp+68h+var_58]
0x5A0313: fld1
0x5A0315: fstp    [esp+68h+a2]; float
0x5A0318: push    edx
0x5A0319: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A031E: fld     dword ptr [esp+6Ch+var_58+4]
0x5A0322: push    eax; int
0x5A0323: sub     esp, 8
0x5A0326: fstp    [esp+78h+var_74]; float
0x5A032A: fld     dword ptr [esp+78h+var_58]
0x5A032E: fstp    [esp+78h+var_78]; float
0x5A0331: call    Calc_ConstantEffectEnchantmentMagnitude
0x5A0336: add     esp, 0Ch
0x5A0339: fstp    [esp+6Ch+var_6C]; float
0x5A033C: call    Round_Float
0x5A0341: add     esp, 8
0x5A0344: call    Double_To_SInt32
0x5A0349: mov     edi, eax
0x5A034B: mov     dword ptr [esp+64h+var_58+4], eax
0x5A034F: mov     ecx, [esi+94h]
0x5A0355: call    EffectItem_GetMagnitude
0x5A035A: cmp     edi, eax
0x5A035C: jz      short loc_5A03A1
0x5A035E: mov     ecx, [esi+94h]
0x5A0364: push    edi
0x5A0365: call    EffectItem_SetMagnitude
0x5A036A: mov     eax, [esi+94h]
0x5A0370: mov     ecx, [eax+1Ch]
0x5A0373: mov     edx, [ecx+58h]
0x5A0376: shr     edx, 1Eh
0x5A0379: test    dl, 1
0x5A037C: jz      short loc_5A03A1
0x5A037E: fild    dword ptr [esp+64h+var_58+4]
0x5A0382: push    ecx
0x5A0383: mov     ecx, [esi+40h]; this
0x5A0386: fmul    dword ptr ds:0B380D0h
0x5A038C: fstp    dword ptr [esp+68h+var_58]
0x5A0390: fld     dword ptr [esp+68h+var_58]
0x5A0394: fstp    [esp+68h+a2]; a3
0x5A0397: push    0FB1h; a2
0x5A039C: call    Tile_SetFloat
0x5A03A1: mov     ecx, [esi+58h]
0x5A03A4: push    0FA1h
0x5A03A9: call    Tile_GetFloat
0x5A03AE: fcomp   dword ptr ds:0A379B4h
0x5A03B4: fnstsw  ax
0x5A03B6: test    ah, 44h
0x5A03B9: jp      short loc_5A03CA
0x5A03BB: mov     ecx, [esi+58h]
0x5A03BE: push    0FB5h
0x5A03C3: call    Tile_GetFloat
0x5A03C8: jmp     short loc_5A03DD
0x5A03CA: mov     ecx, [esi+94h]
0x5A03D0: call    EffectItem_GetDuration
0x5A03D5: mov     dword ptr [esp+64h+var_58], eax
0x5A03D9: fild    dword ptr [esp+64h+var_58]
0x5A03DD: fstp    dword ptr [esp+64h+var_58]
0x5A03E1: fld     dword ptr [esp+64h+var_58]
0x5A03E5: call    Double_To_SInt32
0x5A03EA: mov     ecx, [esi+94h]
0x5A03F0: mov     edi, eax
0x5A03F2: call    EffectItem_GetDuration
0x5A03F7: cmp     edi, eax
0x5A03F9: jz      short loc_5A0407
0x5A03FB: mov     ecx, [esi+94h]
0x5A0401: push    edi
0x5A0402: call    EffectItem_SetDuration
0x5A0407: mov     ecx, [esi+50h]
0x5A040A: push    0FA1h
0x5A040F: call    Tile_GetFloat
0x5A0414: fcomp   dword ptr ds:0A379B4h
0x5A041A: fnstsw  ax
0x5A041C: test    ah, 44h
0x5A041F: jp      short loc_5A0430
0x5A0421: mov     ecx, [esi+50h]
0x5A0424: push    0FB5h
0x5A0429: call    Tile_GetFloat
0x5A042E: jmp     short loc_5A0443
0x5A0430: mov     ecx, [esi+94h]
0x5A0436: call    EffectItem_GetArea
0x5A043B: mov     dword ptr [esp+64h+var_58], eax
0x5A043F: fild    dword ptr [esp+64h+var_58]
0x5A0443: fstp    dword ptr [esp+64h+var_58]
0x5A0447: fld     dword ptr [esp+64h+var_58]
0x5A044B: call    Double_To_SInt32
0x5A0450: mov     edi, eax
0x5A0452: mov     dword ptr [esp+64h+var_58], edi
0x5A0456: fild    dword ptr [esp+64h+var_58]
0x5A045A: fld     dword ptr ds:0B3B29Ch
0x5A0460: fcompp
0x5A0462: fnstsw  ax
0x5A0464: test    ah, 41h
0x5A0467: jnz     short loc_5A046F
0x5A0469: xor     edi, edi
0x5A046B: mov     dword ptr [esp+64h+var_58], edi
0x5A046F: mov     ecx, [esi+94h]
0x5A0475: call    EffectItem_GetArea
0x5A047A: cmp     edi, eax
0x5A047C: jz      short loc_5A049F
0x5A047E: mov     ecx, [esi+94h]
0x5A0484: push    edi
0x5A0485: call    EffectItem_SetArea
0x5A048A: fild    dword ptr [esp+64h+var_58]
0x5A048E: push    ecx
0x5A048F: mov     ecx, [esi+4Ch]; this
0x5A0492: fstp    [esp+68h+a2]; a3
0x5A0495: push    0FAEh; a2
0x5A049A: call    Tile_SetFloat
0x5A049F: test    edi, edi
0x5A04A1: jnz     short loc_5A04B5
0x5A04A3: mov     ecx, [esi+4Ch]
0x5A04A6: push    offset asc_A3A0E4; "-"
0x5A04AB: push    0FAEh
0x5A04B0: call    Tile_SetString
0x5A04B5: mov     ecx, [esi+34h]
0x5A04B8: push    0FA1h
0x5A04BD: call    Tile_GetFloat
0x5A04C2: fcomp   dword ptr ds:0A2F948h
0x5A04C8: fnstsw  ax
0x5A04CA: test    ah, 44h
0x5A04CD: jnp     short loc_5A04EF
0x5A04CF: mov     eax, [esi+94h]
0x5A04D5: mov     eax, [eax+14h]
0x5A04D8: push    eax
0x5A04D9: call    ActorValue_GetName
0x5A04DE: mov     ecx, [esi+34h]
0x5A04E1: add     esp, 4
0x5A04E4: push    eax
0x5A04E5: push    0FAEh
0x5A04EA: call    Tile_SetString
0x5A04EF: mov     ecx, [esi+38h]
0x5A04F2: push    0FA1h
0x5A04F7: call    Tile_GetFloat
0x5A04FC: fcomp   dword ptr ds:0A2F948h
0x5A0502: fnstsw  ax
0x5A0504: test    ah, 44h
0x5A0507: jnp     short loc_5A0529
0x5A0509: mov     ecx, [esi+94h]
0x5A050F: mov     eax, [ecx+14h]
0x5A0512: push    eax
0x5A0513: call    ActorValue_GetName
0x5A0518: mov     ecx, [esi+38h]
0x5A051B: add     esp, 4
0x5A051E: push    eax
0x5A051F: push    0FAEh
0x5A0524: call    Tile_SetString
0x5A0529: cmp     dword ptr [esi+78h], 0
0x5A052D: jz      loc_5A05F1
0x5A0533: mov     edx, [esi+78h]
0x5A0536: mov     eax, [edx+74h]
0x5A0539: mov     edx, ds:0B333C4h
0x5A053F: lea     ecx, [eax+24h]
0x5A0542: mov     eax, [ecx]
0x5A0544: mov     eax, [eax]
0x5A0546: push    edx
0x5A0547: call    eax
0x5A0549: fstp    dword ptr [esp+64h+var_58+4]
0x5A054D: fld     dword ptr [esp+64h+var_58+4]
0x5A0551: call    Double_To_SInt32
0x5A0556: push    eax
0x5A0557: lea     ecx, [esp+68h+var_48+4]
0x5A055B: push    offset aD_0; "%d"
0x5A0560: push    ecx
0x5A0561: call    __sprintf
0x5A0566: mov     ecx, [esi+4]
0x5A0569: add     esp, 0Ch
0x5A056C: lea     edx, [esp+64h+var_48+4]
0x5A0570: push    edx
0x5A0571: push    0FAFh
0x5A0576: call    Tile_SetString
0x5A057B: fld     dword ptr ds:0B37FE0h
0x5A0581: fmul    dword ptr [esp+64h+var_58+4]
0x5A0585: call    Double_To_SInt32
0x5A058A: push    eax
0x5A058B: lea     eax, [esp+68h+var_48+4]
0x5A058F: push    offset aD_0; "%d"
0x5A0594: push    eax
0x5A0595: call    __sprintf
0x5A059A: add     esp, 0Ch
0x5A059D: lea     ecx, [esp+64h+var_48+4]
0x5A05A1: push    ecx
0x5A05A2: mov     ecx, [esi+4]
0x5A05A5: push    0FB0h
0x5A05AA: call    Tile_SetString
0x5A05AF: mov     ecx, ds:0B333C4h
0x5A05B5: call    sub_5E4420
0x5A05BA: push    eax
0x5A05BB: lea     edx, [esp+68h+var_48+4]
0x5A05BF: push    offset aD_0; "%d"
0x5A05C4: push    edx
0x5A05C5: call    __sprintf
0x5A05CA: mov     ecx, [esi+4]
0x5A05CD: add     esp, 0Ch
0x5A05D0: lea     eax, [esp+64h+var_48+4]
0x5A05D4: push    eax
0x5A05D5: push    0FB7h
0x5A05DA: call    Tile_SetString
0x5A05DF: pop     edi
0x5A05E0: pop     esi
0x5A05E1: pop     ebp
0x5A05E2: mov     ecx, [esp+58h+var_4]
0x5A05E6: xor     ecx, esp
0x5A05E8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5A05ED: add     esp, 58h
0x5A05F0: retn
0x5A05F1: mov     ecx, [esi+7Ch]
0x5A05F4: mov     ecx, [ecx+34h]
0x5A05F7: mov     edx, [ecx]
0x5A05F9: mov     eax, [edx+10h]
0x5A05FC: call    eax
0x5A05FE: cmp     eax, 3
0x5A0601: jnz     loc_5A06B8
0x5A0607: mov     ecx, ds:0B38BD8h
0x5A060D: push    ecx
0x5A060E: mov     ecx, [esi+4]
0x5A0611: push    0FAFh
0x5A0616: call    Tile_SetString
0x5A061B: mov     edx, [esi+94h]
0x5A0621: mov     eax, [edx+1Ch]
0x5A0624: fld     dword ptr [eax+94h]
0x5A062A: fimul   dword ptr [esp+64h+var_58+4]
0x5A062E: fstp    dword ptr [esp+64h+var_58+4]
0x5A0632: fld     dword ptr [esp+64h+var_58+4]
0x5A0636: call    Double_To_SInt32
0x5A063B: push    eax
0x5A063C: lea     ecx, [esp+68h+var_48+4]
0x5A0640: push    offset aD_0; "%d"
0x5A0645: push    ecx
0x5A0646: call    __sprintf
0x5A064B: mov     ecx, [esi+4]
0x5A064E: add     esp, 0Ch
0x5A0651: lea     edx, [esp+64h+var_48+4]
0x5A0655: push    edx
0x5A0656: push    0FB0h
0x5A065B: call    Tile_SetString
0x5A0660: mov     ecx, ds:0B333C4h
0x5A0666: call    sub_5E4420
0x5A066B: push    eax
0x5A066C: lea     eax, [esp+68h+var_48+4]
0x5A0670: push    offset aD_0; "%d"
0x5A0675: push    eax
0x5A0676: call    __sprintf
0x5A067B: add     esp, 0Ch
0x5A067E: lea     ecx, [esp+64h+var_48+4]
0x5A0682: push    ecx
0x5A0683: mov     ecx, [esi+4]
0x5A0686: push    0FB7h
0x5A068B: call    Tile_SetString
0x5A0690: fld     dword ptr [esp+64h+var_58+4]
0x5A0694: mov     ecx, ds:0B333C4h
0x5A069A: fstp    [esp+64h+var_50+4]
0x5A069E: call    sub_5E4420
0x5A06A3: mov     dword ptr [esp+64h+var_58+4], eax
0x5A06A7: fild    dword ptr [esp+64h+var_58+4]
0x5A06AB: mov     dword ptr [esp+64h+var_58+4], ebp
0x5A06AF: fcomp   [esp+64h+var_50+4]
0x5A06B3: jmp     loc_5A089C
0x5A06B8: mov     edx, [esi+7Ch]
0x5A06BB: mov     eax, [edx+28h]
0x5A06BE: mov     edx, ds:0B333C4h
0x5A06C4: lea     ecx, [eax+24h]
0x5A06C7: mov     eax, [ecx]
0x5A06C9: mov     eax, [eax]
0x5A06CB: push    edx; a3
0x5A06CC: call    eax
0x5A06CE: fstp    dword ptr [esp+64h+var_58]
0x5A06D2: mov     ecx, [esi+7Ch]
0x5A06D5: mov     ecx, [ecx+2Ch]
0x5A06D8: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A06DD: mov     eax, ds:0B39530h[eax*4]
0x5A06E4: test    eax, eax
0x5A06E6: jnz     short loc_5A06F5
0x5A06E8: fldz
0x5A06EA: mov     eax, offset dword_B35464
0x5A06EF: fstp    dword ptr ds:0B35464h
0x5A06F5: mov     edx, [esi+7Ch]
0x5A06F8: fld     dword ptr [eax]
0x5A06FA: mov     ecx, [edx+2Ch]
0x5A06FD: fstp    [esp+64h+var_50+4]
0x5A0701: call    sub_484D70
0x5A0706: mov     dword ptr [esp+64h+var_58+4], eax
0x5A070A: fild    dword ptr [esp+64h+var_58+4]
0x5A070E: fcomp   [esp+64h+var_50+4]
0x5A0712: fnstsw  ax
0x5A0714: test    ah, 41h
0x5A0717: jnz     short loc_5A0740
0x5A0719: mov     eax, [esi+7Ch]
0x5A071C: mov     ecx, [eax+2Ch]
0x5A071F: call    EnchantmentMenu_SoulGemInfo_GetSoulLevel
0x5A0724: mov     eax, ds:0B39530h[eax*4]
0x5A072B: test    eax, eax
0x5A072D: jnz     short loc_5A073C
0x5A072F: fldz
0x5A0731: mov     eax, offset dword_B35464
0x5A0736: fstp    dword ptr ds:0B35464h
0x5A073C: fld     dword ptr [eax]
0x5A073E: jmp     short loc_5A0753
0x5A0740: mov     ecx, [esi+7Ch]
0x5A0743: mov     ecx, [ecx+2Ch]
0x5A0746: call    sub_484D70
0x5A074B: mov     dword ptr [esp+64h+var_58+4], eax
0x5A074F: fild    dword ptr [esp+64h+var_58+4]
0x5A0753: fstp    dword ptr [esp+64h+var_58+4]
0x5A0757: fld     dword ptr [esp+64h+var_58+4]
0x5A075B: call    Double_To_SInt32
0x5A0760: fld     dword ptr [esp+64h+var_58]
0x5A0764: mov     ebp, eax
0x5A0766: mov     dword ptr [esp+64h+var_50+4], ebp
0x5A076A: call    Double_To_SInt32
0x5A076F: push    ebp
0x5A0770: mov     edi, eax
0x5A0772: push    edi
0x5A0773: lea     edx, [esp+6Ch+var_48+4]
0x5A0777: push    offset aDD_1; "%d (%d)"
0x5A077C: push    edx
0x5A077D: call    __sprintf
0x5A0782: mov     ecx, [esi+4]
0x5A0785: add     esp, 10h
0x5A0788: lea     eax, [esp+64h+var_48+4]
0x5A078C: push    eax
0x5A078D: push    0FAFh
0x5A0792: call    Tile_SetString
0x5A0797: fld     dword ptr ds:0B37FE8h
0x5A079D: fmul    dword ptr [esp+64h+var_58]
0x5A07A1: call    Double_To_SInt32
0x5A07A6: push    eax
0x5A07A7: lea     ecx, [esp+68h+var_48+4]
0x5A07AB: push    offset aD_0; "%d"
0x5A07B0: push    ecx
0x5A07B1: call    __sprintf
0x5A07B6: mov     ecx, [esi+4]
0x5A07B9: add     esp, 0Ch
0x5A07BC: lea     edx, [esp+64h+var_48+4]
0x5A07C0: push    edx
0x5A07C1: push    0FB0h
0x5A07C6: call    Tile_SetString
0x5A07CB: mov     ecx, ds:0B333C4h
0x5A07D1: call    sub_5E4420
0x5A07D6: push    eax
0x5A07D7: lea     eax, [esp+68h+var_48+4]
0x5A07DB: push    offset aD_0; "%d"
0x5A07E0: push    eax
0x5A07E1: call    __sprintf
0x5A07E6: add     esp, 0Ch
0x5A07E9: lea     ecx, [esp+64h+var_48+4]
0x5A07ED: push    ecx
0x5A07EE: mov     ecx, [esi+4]
0x5A07F1: push    0FB7h
0x5A07F6: call    Tile_SetString
0x5A07FB: fld1
0x5A07FD: fcomp   dword ptr [esp+64h+var_58]
0x5A0801: fnstsw  ax
0x5A0803: test    ah, 41h
0x5A0806: jp      short loc_5A081C
0x5A0808: mov     edx, [esi+7Ch]
0x5A080B: mov     ecx, [edx+2Ch]
0x5A080E: call    sub_484D70
0x5A0813: cdq
0x5A0814: idiv    edi
0x5A0816: mov     dword ptr [esp+64h+var_58+4], eax
0x5A081A: jmp     short loc_5A0824
0x5A081C: mov     dword ptr [esp+64h+var_58+4], 0FFFFFFFFh
0x5A0824: fild    dword ptr [esp+64h+var_58+4]
0x5A0828: push    ecx
0x5A0829: mov     ecx, [esi+4]; this
0x5A082C: fstp    [esp+68h+a2]; a3
0x5A082F: push    0FB1h; a2
0x5A0834: call    Tile_SetFloat
0x5A0839: fld     dword ptr [esp+64h+var_58]
0x5A083D: fild    dword ptr [esp+64h+var_50+4]
0x5A0841: mov     dword ptr [esp+64h+var_58+4], 2
0x5A0849: fcompp
0x5A084B: fnstsw  ax
0x5A084D: test    ah, 5
0x5A0850: jnp     short loc_5A085A
0x5A0852: mov     dword ptr [esp+64h+var_58+4], 1
0x5A085A: fild    dword ptr [esp+64h+var_58+4]
0x5A085E: push    ecx
0x5A085F: mov     ecx, [esi+4]; this
0x5A0862: fstp    [esp+68h+a2]; a3
0x5A0865: push    0FB2h; a2
0x5A086A: call    Tile_SetFloat
0x5A086F: fld     dword ptr ds:0B37FE8h
0x5A0875: fmul    dword ptr [esp+64h+var_58]
0x5A0879: mov     ecx, ds:0B333C4h
0x5A087F: fstp    [esp+64h+var_58+4]
0x5A0883: call    sub_5E4420
0x5A0888: mov     dword ptr [esp+64h+var_50+4], eax
0x5A088C: fild    dword ptr [esp+64h+var_50+4]
0x5A0890: fcomp   [esp+64h+var_58+4]
0x5A0894: mov     dword ptr [esp+64h+var_58+4], 2
0x5A089C: fnstsw  ax
0x5A089E: test    ah, 5
0x5A08A1: jnp     short loc_5A08AB
0x5A08A3: mov     dword ptr [esp+64h+var_58+4], 1
0x5A08AB: fild    dword ptr [esp+64h+var_58+4]
0x5A08AF: push    ecx
0x5A08B0: mov     ecx, [esi+4]; this
0x5A08B3: fstp    [esp+68h+a2]; a3
0x5A08B6: push    0FB3h; a2
0x5A08BB: call    Tile_SetFloat
0x5A08C0: pop     edi
0x5A08C1: mov     ecx, [esp+60h+var_4]
0x5A08C5: pop     esi
0x5A08C6: pop     ebp
0x5A08C7: xor     ecx, esp
0x5A08C9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5A08CE: add     esp, 58h
0x5A08D1: retn
