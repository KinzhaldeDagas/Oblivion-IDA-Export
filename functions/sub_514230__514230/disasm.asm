0x514230: sub     esp, 208h
0x514236: mov     eax, ds:0B30AACh
0x51423B: xor     eax, esp
0x51423D: mov     [esp+208h+var_4], eax
0x514244: mov     edx, [esp+208h+a4]
0x51424B: mov     ecx, [esp+208h+arg_4]
0x514252: mov     eax, [esp+208h+a1]
0x514259: push    ebx
0x51425A: mov     ebx, [esp+20Ch+l]
0x514261: push    ebp
0x514262: mov     ebp, [esp+210h+arg_1C]
0x514269: push    esi
0x51426A: mov     esi, [esp+214h+arg_C]
0x514271: push    edi
0x514272: mov     edi, [esp+218h+arg_10]
0x514279: mov     [esp+218h+a3], ebp
0x51427D: lea     ebp, [esp+218h+var_204]
0x514281: push    ebp; UInt16
0x514282: push    ebx; l
0x514283: push    edi; a6
0x514284: push    esi; a5
0x514285: push    edx; a4
0x514286: mov     edx, [esp+22Ch+a3]
0x51428A: push    edx; a3
0x51428B: push    ecx; a2
0x51428C: push    eax; a1
0x51428D: call    Script_ExtractArgs
0x514292: add     esp, 20h
0x514295: test    al, al
0x514297: jz      loc_514386
0x51429D: lea     eax, [esp+218h+a3]
0x5142A1: push    eax
0x5142A2: lea     ecx, [esp+21Ch+var_204]
0x5142A6: push    ecx
0x5142A7: mov     ecx, offset INISettingCollection
0x5142AC: mov     [esp+220h+a3], 0
0x5142B4: call    sub_50EC30
0x5142B9: mov     esi, [esp+218h+a3]
0x5142BD: test    esi, esi
0x5142BF: jz      loc_514372
0x5142C5: mov     edx, [esi+4]
0x5142C8: push    edx
0x5142C9: call    Setting_GetTypeFromName
0x5142CE: add     esp, 4
0x5142D1: cmp     eax, 6; switch 7 cases
0x5142D4: ja      def_5142DA; jumptable 005142DA default case, cases 1,2,4
0x5142DA: jmp     ds:jpt_5142DA[eax*4]; switch jump
0x5142E1: mov     ecx, esi; jumptable 005142DA case 3
0x5142E3: call    sub_403BE0
0x5142E8: mov     eax, [eax]
0x5142EA: push    eax
0x5142EB: lea     ecx, [esp+21Ch+var_204]
0x5142EF: push    ecx
0x5142F0: push    offset aInisettingSI; "INISetting %s >> %i"
0x5142F5: call    Interface_ConsolePrint
0x5142FA: add     esp, 0Ch
0x5142FD: jmp     loc_514384
0x514302: mov     ecx, esi; jumptable 005142DA case 5
0x514304: call    GameSetting_GetSafeFloatPointer
0x514309: fld     dword ptr [eax]
0x51430B: sub     esp, 8
0x51430E: lea     edx, [esp+220h+var_204]
0x514312: fstp    [esp+220h+var_220]
0x514315: push    edx
0x514316: push    offset aInisettingS_2f; "INISetting %s >> %.2f"
0x51431B: call    Interface_ConsolePrint
0x514320: add     esp, 10h
0x514323: jmp     short loc_514384
0x514325: mov     ecx, esi; jumptable 005142DA case 6
0x514327: call    sub_403BE0
0x51432C: mov     eax, [eax]
0x51432E: push    eax
0x51432F: lea     ecx, [esp+21Ch+var_204]
0x514333: push    ecx
0x514334: push    offset aInisettingSS; "INISetting %s >> '%s'"
0x514339: call    Interface_ConsolePrint
0x51433E: add     esp, 0Ch
0x514341: jmp     short loc_514384
0x514343: mov     ecx, esi; jumptable 005142DA case 0
0x514345: call    sub_404DF0
0x51434A: xor     edx, edx
0x51434C: cmp     [eax], dl
0x51434E: lea     eax, [esp+218h+var_204]
0x514352: setnz   dl
0x514355: push    edx
0x514356: push    eax
0x514357: push    offset aInisettingSI; "INISetting %s >> %i"
0x51435C: call    Interface_ConsolePrint
0x514361: add     esp, 0Ch
0x514364: jmp     short loc_514384
0x514366: lea     ecx, [esp+218h+var_204]; jumptable 005142DA default case, cases 1,2,4
0x51436A: push    ecx
0x51436B: push    offset aInisettingSUnk; "INISetting %s >> UNKNOWN TYPE"
0x514370: jmp     short loc_51437C
0x514372: lea     edx, [esp+218h+var_204]
0x514376: push    edx
0x514377: push    offset aInisettingSNot; "INISetting %s >> NOT FOUND"
0x51437C: call    Interface_ConsolePrint
0x514381: add     esp, 8
0x514384: mov     al, 1
0x514386: mov     ecx, [esp+218h+var_4]
0x51438D: pop     edi
0x51438E: pop     esi
0x51438F: pop     ebp
0x514390: pop     ebx
0x514391: xor     ecx, esp
0x514393: call    @__security_check_cookie@4; __security_check_cookie(x)
0x514398: add     esp, 208h
0x51439E: retn
