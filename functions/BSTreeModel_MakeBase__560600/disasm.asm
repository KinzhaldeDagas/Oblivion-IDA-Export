0x560600: push    0FFFFFFFFh
0x560602: push    offset SEH_560600
0x560607: mov     eax, large fs:0
0x56060D: push    eax
0x56060E: sub     esp, 134h
0x560614: mov     eax, ds:0B30AACh
0x560619: xor     eax, esp
0x56061B: mov     [esp+140h+var_10], eax
0x560622: push    ebx
0x560623: push    ebp
0x560624: push    esi
0x560625: push    edi
0x560626: mov     eax, ds:0B30AACh
0x56062B: xor     eax, esp
0x56062D: push    eax
0x56062E: lea     eax, [esp+154h+var_C]
0x560635: mov     large fs:0, eax
0x56063B: mov     ebx, [esp+154h+arg_0]
0x560642: test    ebx, ebx
0x560644: mov     ebp, ecx
0x560646: mov     [esp+154h+var_138], ebx
0x56064A: jz      loc_5608DA
0x560650: mov     eax, [ebx+24h]
0x560653: mov     edx, [eax+14h]
0x560656: add     ebx, 24h ; '$'
0x560659: mov     ecx, ebx
0x56065B: call    edx
0x56065D: test    eax, eax
0x56065F: jz      loc_5608DA
0x560665: mov     eax, [ebx]
0x560667: mov     edx, [eax+14h]
0x56066A: mov     ecx, ebx
0x56066C: call    edx
0x56066E: cmp     byte ptr [eax], 0
0x560671: jz      loc_5608DA
0x560677: cmp     dword ptr [ebp+8], 0
0x56067B: jnz     loc_5608DA
0x560681: mov     eax, ds:0A366C4h
0x560686: mov     cx, ds:0A366C8h
0x56068D: mov     edx, [ebx]
0x56068F: mov     dword ptr [esp+154h+var_114], eax
0x560693: mov     eax, [edx+14h]
0x560696: mov     [esp+154h+var_110], cx
0x56069B: mov     ecx, ebx
0x56069D: call    eax
0x56069F: mov     edx, eax
0x5606A1: mov     cl, [eax]
0x5606A3: add     eax, 1
0x5606A6: test    cl, cl
0x5606A8: jnz     short loc_5606A1
0x5606AA: lea     edi, [esp+154h+var_114]
0x5606AE: sub     eax, edx
0x5606B0: add     edi, 0FFFFFFFFh
0x5606B3: mov     cl, [edi+1]
0x5606B6: add     edi, 1
0x5606B9: test    cl, cl
0x5606BB: jnz     short loc_5606B3
0x5606BD: mov     ecx, eax
0x5606BF: shr     ecx, 2
0x5606C2: mov     esi, edx
0x5606C4: rep movsd
0x5606C6: mov     ecx, eax
0x5606C8: and     ecx, 3
0x5606CB: push    0A0h ; ' '; Size
0x5606D0: rep movsb
0x5606D2: call    FormHeapAlloc
0x5606D7: add     esp, 4
0x5606DA: mov     [esp+154h+var_13C], eax
0x5606DE: test    eax, eax
0x5606E0: mov     [esp+154h+var_4], 0
0x5606EB: jz      short loc_5606F8
0x5606ED: mov     ecx, eax
0x5606EF: call    sub_78D6A0
0x5606F4: mov     esi, eax
0x5606F6: jmp     short loc_5606FA
0x5606F8: xor     esi, esi
0x5606FA: lea     ecx, [esp+154h+var_114]
0x5606FE: push    ecx; char *
0x5606FF: mov     ecx, esi
0x560701: mov     [esp+158h+var_4], 0FFFFFFFFh
0x56070C: call    sub_78E310
0x560711: test    al, al
0x560713: jz      loc_560906
0x560719: lea     ecx, [esp+154h+var_130]
0x56071D: call    sub_786FA0
0x560722: lea     edx, [esp+154h+var_130]
0x560726: mov     edi, 1
0x56072B: push    edx
0x56072C: mov     ecx, esi
0x56072E: mov     [esp+158h+var_4], edi
0x560735: call    sub_78A890
0x56073A: cmp     [esp+154h+var_12C], 3
0x56073F: mov     ecx, esi
0x560741: ja      short loc_56074C
0x560743: push    2
0x560745: call    sub_78B700
0x56074A: jmp     short loc_560770
0x56074C: push    edi
0x56074D: call    sub_78B700
0x560752: cmp     [esp+154h+var_12C], 6
0x560757: jbe     short loc_560770
0x560759: mov     eax, [ebx]
0x56075B: mov     edx, [eax+14h]
0x56075E: mov     ecx, ebx
0x560760: call    edx
0x560762: push    eax; ArgList
0x560763: push    offset aTreeSHasTooMan; "Tree %s has too many leaf maps (greater"...
0x560768: call    PrintError
0x56076D: add     esp, 8
0x560770: push    edi
0x560771: mov     ecx, esi
0x560773: call    sub_7870D0
0x560778: lea     eax, [esp+154h+var_134]
0x56077C: push    eax
0x56077D: lea     ecx, [esp+158h+var_13C]
0x560781: push    ecx
0x560782: mov     ecx, esi
0x560784: call    sub_787060
0x560789: fld     dword ptr ds:0B39E18h
0x56078F: fld     st
0x560791: sub     esp, 8
0x560794: fmul    dword ptr [esp+15Ch+var_134]
0x560798: mov     ecx, esi
0x56079A: fstp    [esp+15Ch+var_140]
0x56079E: fld     [esp+15Ch+var_140]
0x5607A2: fstp    [esp+15Ch+var_158]; float
0x5607A6: fmul    [esp+15Ch+var_13C]
0x5607AA: fstp    [esp+15Ch+var_140]
0x5607AE: fld     [esp+15Ch+var_140]
0x5607B2: fstp    [esp+15Ch+var_15C]; float
0x5607B5: call    sub_78B0E0
0x5607BA: fld     dword ptr ds:0A30634h
0x5607C0: sub     esp, 0Ch
0x5607C3: fst     [esp+160h+var_158]; float
0x5607C7: mov     ecx, esi
0x5607C9: fstp    [esp+160h+var_15C]; float
0x5607CD: fldz
0x5607CF: fstp    [esp+160h+var_160]; float
0x5607D2: call    sub_78BBF0
0x5607D7: fstp    st
0x5607D9: push    4
0x5607DB: push    0
0x5607DD: mov     ecx, esi
0x5607DF: call    sub_78BE70
0x5607E4: push    0
0x5607E6: mov     ecx, esi
0x5607E8: mov     [esi+18h], edi
0x5607EB: call    sub_78B950
0x5607F0: push    0
0x5607F2: mov     ecx, esi
0x5607F4: call    sub_78BAA0
0x5607F9: push    0
0x5607FB: mov     ecx, esi
0x5607FD: call    sub_78B820
0x560802: push    0
0x560804: mov     ecx, esi
0x560806: call    sub_78B320
0x56080B: push    0
0x56080D: mov     ecx, esi
0x56080F: call    sub_78B560
0x560814: push    0
0x560816: mov     ecx, esi
0x560818: call    sub_78B440
0x56081D: fld     dword ptr ds:0B0760Ch
0x560823: fld     st
0x560825: sub     esp, 8
0x560828: fmul    dword ptr ds:0B39E10h
0x56082E: mov     ecx, esi
0x560830: fstp    [esp+15Ch+var_140]
0x560834: fld     [esp+15Ch+var_140]
0x560838: fstp    [esp+15Ch+var_158]; float
0x56083C: fmul    dword ptr ds:0B39E08h
0x560842: fstp    [esp+15Ch+var_140]
0x560846: fld     [esp+15Ch+var_140]
0x56084A: fstp    [esp+15Ch+var_15C]; float
0x56084D: call    sub_7871D0
0x560852: lea     ecx, [esp+154h+var_130]
0x560856: mov     [esp+154h+var_4], 0FFFFFFFFh
0x560861: call    sub_786FC0
0x560866: mov     edx, [ebp+0]
0x560869: mov     ebx, [esp+154h+var_138]
0x56086D: mov     eax, [edx+0Ch]
0x560870: push    ebx
0x560871: mov     ecx, ebp
0x560873: mov     [ebp+8], edi
0x560876: mov     [ebp+0Ch], esi
0x560879: call    eax
0x56087B: mov     ecx, [esp+154h+arg_4]
0x560882: push    edi; float
0x560883: push    ecx; int
0x560884: push    0; int
0x560886: mov     ecx, esi
0x560888: call    sub_78CCA0
0x56088D: test    al, al
0x56088F: jz      loc_56091A
0x560895: mov     ecx, esi
0x560897: call    sub_789030
0x56089C: mov     ecx, esi
0x56089E: call    sub_78B220
0x5608A3: mov     ecx, esi
0x5608A5: mov     [ebp+48h], eax
0x5608A8: call    sub_787140
0x5608AD: fstp    dword ptr [ebp+50h]
0x5608B0: mov     ecx, esi
0x5608B2: call    sub_787120
0x5608B7: fstp    dword ptr [ebp+54h]
0x5608BA: mov     edx, [ebp+0]
0x5608BD: mov     eax, [edx+14h]
0x5608C0: push    ebx
0x5608C1: mov     ecx, ebp
0x5608C3: call    eax
0x5608C5: mov     ecx, esi
0x5608C7: call    sub_78B0C0
0x5608CC: mov     ecx, esi
0x5608CE: call    sub_78C160
0x5608D3: mov     ecx, esi
0x5608D5: call    sub_789EC0
0x5608DA: mov     al, 1
0x5608DC: mov     ecx, [esp+154h+var_C]
0x5608E3: mov     large fs:0, ecx
0x5608EA: pop     ecx
0x5608EB: pop     edi
0x5608EC: pop     esi
0x5608ED: pop     ebp
0x5608EE: pop     ebx
0x5608EF: mov     ecx, [esp+140h+var_10]
0x5608F6: xor     ecx, esp
0x5608F8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x5608FD: add     esp, 140h
0x560903: retn    8
0x560906: test    esi, esi
0x560908: jz      short loc_56091A
0x56090A: mov     ecx, esi
0x56090C: call    sub_78C9B0
0x560911: push    esi
0x560912: call    FormHeapFree
0x560917: add     esp, 4
0x56091A: xor     al, al
0x56091C: jmp     short loc_5608DC
