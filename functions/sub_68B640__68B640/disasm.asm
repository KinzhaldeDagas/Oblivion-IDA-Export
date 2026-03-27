0x68B640: sub     esp, 170h
0x68B646: mov     eax, ds:0B30AACh
0x68B64B: xor     eax, esp
0x68B64D: mov     [esp+170h+var_4], eax
0x68B654: push    ebx
0x68B655: push    ebp
0x68B656: push    esi
0x68B657: mov     esi, [esp+17Ch+arg_0]
0x68B65E: test    esi, esi
0x68B660: push    edi
0x68B661: mov     ebp, ecx
0x68B663: jz      loc_68BD1A
0x68B669: fldz
0x68B66B: fcomp   [esp+180h+arg_4]
0x68B672: fnstsw  ax
0x68B674: test    ah, 1
0x68B677: jz      loc_68BD1A
0x68B67D: mov     ecx, esi
0x68B67F: call    IsWeaponReady
0x68B684: test    al, al
0x68B686: jz      loc_68BD1A
0x68B68C: mov     eax, [esi]
0x68B68E: mov     edx, [eax+380h]
0x68B694: mov     ecx, esi
0x68B696: call    edx
0x68B698: test    eax, eax
0x68B69A: jz      short loc_68B6B7
0x68B69C: mov     eax, [esi]
0x68B69E: mov     edx, [eax+380h]
0x68B6A4: mov     ecx, esi
0x68B6A6: call    edx
0x68B6A8: mov     ecx, eax
0x68B6AA: call    IsWeaponReady
0x68B6AF: test    al, al
0x68B6B1: jz      loc_68BD1A
0x68B6B7: mov     ecx, esi; this
0x68B6B9: call    TESObjectREFR_GetParentCell
0x68B6BE: test    eax, eax
0x68B6C0: jnz     short loc_68B6DA
0x68B6C2: fld     [esp+180h+arg_4]
0x68B6C9: push    ecx
0x68B6CA: fstp    [esp+184h+var_184]; float
0x68B6CD: push    esi; Concurrency::details::SchedulerBase *
0x68B6CE: mov     ecx, ebp
0x68B6D0: call    sub_68A300
0x68B6D5: jmp     loc_68BD1C
0x68B6DA: mov     eax, ds:0B333A0h
0x68B6DF: cmp     dword ptr [eax+34h], 0
0x68B6E3: mov     [esp+180h+var_128], 0
0x68B6EB: mov     [esp+180h+var_169], 0
0x68B6F0: jnz     short loc_68B70F
0x68B6F2: mov     ecx, esi; this
0x68B6F4: call    TESObjectREFR_GetWorldSpace
0x68B6F9: mov     ecx, ds:0B333A0h
0x68B6FF: mov     edi, eax
0x68B701: call    TES__GetCurrentWorldspace
0x68B706: cmp     edi, eax
0x68B708: jnz     short loc_68B70F
0x68B70A: mov     [esp+180h+var_169], 1
0x68B70F: fldz
0x68B711: mov     ecx, esi
0x68B713: fstp    [esp+180h+var_144]
0x68B717: mov     [esp+180h+var_16A], 0
0x68B71C: call    sub_5E65B0
0x68B721: fstp    [esp+180h+var_124]
0x68B725: mov     edx, [esi]
0x68B727: fld     [esp+180h+arg_4]
0x68B72E: mov     eax, [edx+174h]
0x68B734: fstp    [esp+180h+var_158]
0x68B738: mov     ecx, esi
0x68B73A: call    eax
0x68B73C: mov     ecx, [eax]
0x68B73E: mov     [esp+180h+var_168], ecx
0x68B742: mov     edx, [eax+4]
0x68B745: mov     [esp+180h+var_164], edx
0x68B749: mov     eax, [eax+8]
0x68B74C: lea     ebx, [ebp+14h]
0x68B74F: mov     ecx, ebx
0x68B751: mov     [esp+180h+var_160], eax
0x68B755: call    sub_42B410
0x68B75A: mov     edi, eax
0x68B75C: lea     esp, [esp+0]
0x68B760: test    edi, edi
0x68B762: jz      loc_68BBCA
0x68B768: mov     ecx, edi
0x68B76A: call    sub_68CA20
0x68B76F: mov     ecx, edi
0x68B771: mov     [esp+180h+var_16A], al
0x68B775: call    sub_6899C0
0x68B77A: cmp     [esp+180h+var_169], 0
0x68B77F: mov     ecx, [eax]
0x68B781: mov     [esp+180h+var_134], ecx
0x68B785: mov     edx, [eax+4]
0x68B788: mov     [esp+180h+var_130], edx
0x68B78C: mov     eax, [eax+8]
0x68B78F: mov     [esp+180h+var_12C], eax
0x68B793: jz      short loc_68B804
0x68B795: fld     dword ptr ds:0A427E4h
0x68B79B: push    ecx
0x68B79C: fstp    [esp+184h+var_184]; float
0x68B79F: lea     ecx, [esp+184h+var_114]
0x68B7A3: push    ecx; int
0x68B7A4: mov     ecx, ds:0B333A0h
0x68B7AA: lea     edx, [esp+188h+var_134]
0x68B7AE: push    edx; int
0x68B7AF: lea     eax, [esp+18Ch+var_168]
0x68B7B3: push    eax; int
0x68B7B4: call    sub_43F7C0
0x68B7B9: test    eax, eax
0x68B7BB: jz      short loc_68B804
0x68B7BD: mov     ecx, ds:0B333A0h
0x68B7C3: push    0; int
0x68B7C5: call    TES__GetCurrentWorldspace
0x68B7CA: fld     [esp+184h+var_110]
0x68B7CE: mov     ecx, ds:0B33A98h
0x68B7D4: push    eax; int
0x68B7D5: sub     esp, 8
0x68B7D8: fstp    [esp+190h+a2+4]; float
0x68B7DC: fld     [esp+190h+var_114]
0x68B7E0: fstp    [esp+190h+a2]; float
0x68B7E3: call    sub_44A270
0x68B7E8: mov     ecx, [esp+180h+var_114]
0x68B7EC: mov     edx, [esp+180h+var_110]
0x68B7F0: mov     [esp+180h+var_128], eax
0x68B7F4: mov     eax, [esp+180h+var_10C]
0x68B7F8: mov     [esp+180h+var_134], ecx
0x68B7FC: mov     [esp+180h+var_130], edx
0x68B800: mov     [esp+180h+var_12C], eax
0x68B804: fld     [esp+180h+var_168]
0x68B808: fsub    [esp+180h+var_134]
0x68B80C: fstp    [esp+180h+var_154]
0x68B810: fld     [esp+180h+var_164]
0x68B814: fsub    [esp+180h+var_130]
0x68B818: fstp    [esp+180h+var_150]
0x68B81C: fld     [esp+180h+var_160]
0x68B820: fsub    [esp+180h+var_12C]
0x68B824: fstp    [esp+180h+var_14C]
0x68B828: fld     [esp+180h+var_150]
0x68B82C: fld     [esp+180h+var_154]
0x68B830: fld     [esp+180h+var_14C]
0x68B834: fld     st(1)
0x68B836: fmulp   st(2), st
0x68B838: fld     st(2)
0x68B83A: fmulp   st(3), st
0x68B83C: fxch    st(1)
0x68B83E: faddp   st(2), st
0x68B840: fmul    st, st
0x68B842: faddp   st(1), st
0x68B844: fstp    [esp+180h+var_15C]
0x68B848: fld     [esp+180h+var_15C]
0x68B84C: call    __CIsqrt
0x68B851: fstp    [esp+180h+var_15C]
0x68B855: fld     [esp+180h+var_15C]
0x68B859: fstp    [esp+180h+var_15C]
0x68B85D: fld     [esp+180h+var_15C]
0x68B861: fld     st
0x68B863: fdiv    [esp+180h+var_124]
0x68B867: fstp    [esp+180h+var_170]
0x68B86B: fld     [esp+180h+var_158]
0x68B86F: fld     [esp+180h+var_170]
0x68B873: fcompp
0x68B875: fnstsw  ax
0x68B877: test    ah, 41h
0x68B87A: jp      loc_68BA59
0x68B880: cmp     [esp+180h+var_128], 0
0x68B885: fadd    [esp+180h+var_144]
0x68B889: mov     ecx, [esp+180h+var_134]
0x68B88D: mov     edx, [esp+180h+var_130]
0x68B891: mov     eax, [esp+180h+var_12C]
0x68B895: fstp    [esp+180h+var_144]
0x68B899: mov     [esp+180h+var_168], ecx
0x68B89D: mov     [esp+180h+var_164], edx
0x68B8A1: mov     [esp+180h+var_160], eax
0x68B8A5: jnz     loc_68B9C7
0x68B8AB: push    edi
0x68B8AC: mov     ecx, ebx
0x68B8AE: call    sub_68C170
0x68B8B3: mov     ecx, ebx
0x68B8B5: call    sub_42B410
0x68B8BA: fld     [esp+180h+var_158]
0x68B8BE: fsub    [esp+180h+var_170]
0x68B8C2: mov     edi, eax
0x68B8C4: test    edi, edi
0x68B8C6: fstp    [esp+180h+var_158]
0x68B8CA: jnz     loc_68B9B1
0x68B8D0: cmp     ds:0B333B4h, esi
0x68B8D6: jnz     short loc_68B904
0x68B8D8: mov     edx, [esi]
0x68B8DA: mov     eax, [edx+0D4h]
0x68B8E0: mov     ecx, esi
0x68B8E2: call    eax
0x68B8E4: push    eax
0x68B8E5: lea     ecx, [esp+184h+Format]
0x68B8E9: push    offset aActorSComplete; "Actor '%s' completed high path."
0x68B8EE: push    ecx
0x68B8EF: call    __sprintf
0x68B8F4: lea     edx, [esp+18Ch+Format]
0x68B8FB: push    edx; Format
0x68B8FC: call    Interface_ConsolePrint
0x68B901: add     esp, 10h
0x68B904: push    esi
0x68B905: mov     ecx, ebp
0x68B907: call    sub_68B4F0
0x68B90C: mov     ecx, ebx
0x68B90E: call    sub_42B410
0x68B913: mov     edi, eax
0x68B915: test    edi, edi
0x68B917: jnz     loc_68B9B1
0x68B91D: mov     ecx, ebp
0x68B91F: call    sub_68A140
0x68B924: test    al, al
0x68B926: jz      loc_68B9B1
0x68B92C: mov     ecx, ebp
0x68B92E: call    sub_6899D0
0x68B933: fstp    [esp+180h+var_170]
0x68B937: fldz
0x68B939: fld     [esp+180h+var_170]
0x68B93D: fcom    st(1)
0x68B93F: fnstsw  ax
0x68B941: fstp    st(1)
0x68B943: test    ah, 41h
0x68B946: jnz     short loc_68B9AF
0x68B948: fsub    qword ptr ds:0A2FC80h
0x68B94E: fstp    [esp+180h+var_170]
0x68B952: fld     [esp+180h+var_170]
0x68B956: fld     [esp+180h+var_15C]
0x68B95A: fcom    st(1)
0x68B95C: fnstsw  ax
0x68B95E: fstp    st(1)
0x68B960: test    ah, 5
0x68B963: jp      short loc_68B96B
0x68B965: fstp    [esp+180h+var_170]
0x68B969: jmp     short loc_68B96D
0x68B96B: fstp    st
0x68B96D: lea     ecx, [esp+180h+var_154]
0x68B971: call    sub_43F350
0x68B976: fstp    st
0x68B978: fld     [esp+180h+var_170]
0x68B97C: push    ecx
0x68B97D: lea     ecx, [esp+184h+var_154]
0x68B981: fstp    [esp+184h+var_184]; float
0x68B984: call    NiPoint3__MutliplyByValue
0x68B989: fld     [esp+180h+var_154]
0x68B98D: fadd    [esp+180h+var_168]
0x68B991: fstp    [esp+180h+var_168]
0x68B995: fld     [esp+180h+var_150]
0x68B999: fadd    [esp+180h+var_164]
0x68B99D: fstp    [esp+180h+var_164]
0x68B9A1: fld     [esp+180h+var_14C]
0x68B9A5: fadd    [esp+180h+var_160]
0x68B9A9: fstp    [esp+180h+var_160]
0x68B9AD: jmp     short loc_68B9B1
0x68B9AF: fstp    st
0x68B9B1: fldz
0x68B9B3: fcomp   [esp+180h+var_158]
0x68B9B7: fnstsw  ax
0x68B9B9: test    ah, 44h
0x68B9BC: jp      loc_68B760
0x68B9C2: jmp     loc_68BBCA
0x68B9C7: cmp     ds:0B333B4h, esi
0x68B9CD: jnz     short loc_68B9FB
0x68B9CF: mov     eax, [esi]
0x68B9D1: mov     edx, [eax+0D4h]
0x68B9D7: mov     ecx, esi
0x68B9D9: call    edx
0x68B9DB: push    eax
0x68B9DC: lea     eax, [esp+184h+Format]
0x68B9E0: push    offset aActorSPlacedAt; "Actor '%s' placed at edge of world."
0x68B9E5: push    eax
0x68B9E6: call    __sprintf
0x68B9EB: lea     ecx, [esp+18Ch+Format]
0x68B9F2: push    ecx; Format
0x68B9F3: call    Interface_ConsolePrint
0x68B9F8: add     esp, 10h
0x68B9FB: fldz
0x68B9FD: mov     ecx, edi
0x68B9FF: fstp    [esp+180h+var_158]
0x68BA03: call    sub_6899C0
0x68BA08: fld     dword ptr [eax+4]
0x68BA0B: fsub    [esp+180h+var_164]
0x68BA0F: mov     ebp, [esi]
0x68BA11: lea     edx, [esp+180h+var_140]
0x68BA15: push    edx
0x68BA16: add     ebp, 1E8h
0x68BA1C: fstp    [esp+184h+var_15C]
0x68BA20: fld     dword ptr [eax+8]
0x68BA23: fsub    [esp+184h+var_160]
0x68BA27: fstp    [esp+184h+var_170]
0x68BA2B: fld     dword ptr [eax]
0x68BA2D: fsub    [esp+184h+var_168]
0x68BA31: fstp    [esp+184h+var_140]
0x68BA35: fld     [esp+184h+var_15C]
0x68BA39: fstp    [esp+184h+var_13C]
0x68BA3D: fld     [esp+184h+var_170]
0x68BA41: fstp    [esp+184h+var_138]
0x68BA45: call    sub_683CB0
0x68BA4A: mov     eax, [ebp+0]
0x68BA4D: fstp    [esp+184h+var_184]
0x68BA50: mov     ecx, esi
0x68BA52: call    eax
0x68BA54: jmp     loc_68BBCA
0x68BA59: cmp     ds:0B333B4h, esi
0x68BA5F: fstp    st
0x68BA61: jnz     short loc_68BA8F
0x68BA63: mov     edx, [esi]
0x68BA65: mov     eax, [edx+0D4h]
0x68BA6B: mov     ecx, esi
0x68BA6D: call    eax
0x68BA6F: push    eax
0x68BA70: lea     ecx, [esp+184h+Format]
0x68BA74: push    offset aActorSPlacedAl; "Actor '%s' placed along segment."
0x68BA79: push    ecx
0x68BA7A: call    __sprintf
0x68BA7F: lea     edx, [esp+18Ch+Format]
0x68BA86: push    edx; Format
0x68BA87: call    Interface_ConsolePrint
0x68BA8C: add     esp, 10h
0x68BA8F: fld     [esp+180h+var_158]
0x68BA93: mov     ecx, edi
0x68BA95: fstp    [esp+180h+var_170]
0x68BA99: fldz
0x68BA9B: fstp    [esp+180h+var_158]
0x68BA9F: call    sub_6899C0
0x68BAA4: fld     dword ptr [eax+4]
0x68BAA7: fsub    [esp+180h+var_164]
0x68BAAB: lea     ecx, [esp+180h+var_154]
0x68BAAF: fstp    [esp+180h+var_15C]
0x68BAB3: fld     dword ptr [eax+8]
0x68BAB6: fsub    [esp+180h+var_160]
0x68BABA: fstp    [esp+180h+var_148]
0x68BABE: fld     dword ptr [eax]
0x68BAC0: fsub    [esp+180h+var_168]
0x68BAC4: fstp    [esp+180h+var_154]
0x68BAC8: fld     [esp+180h+var_15C]
0x68BACC: fstp    [esp+180h+var_150]
0x68BAD0: fld     [esp+180h+var_148]
0x68BAD4: fstp    [esp+180h+var_14C]
0x68BAD8: call    sub_43F350
0x68BADD: fstp    st
0x68BADF: fld     [esp+180h+var_154]
0x68BAE3: fld     [esp+180h+var_124]
0x68BAE7: fld     st
0x68BAE9: fmulp   st(2), st
0x68BAEB: fxch    st(1)
0x68BAED: fstp    [esp+180h+var_140]
0x68BAF1: fld     [esp+180h+var_150]
0x68BAF5: fmul    st, st(1)
0x68BAF7: fstp    [esp+180h+var_13C]
0x68BAFB: fmul    [esp+180h+var_14C]
0x68BAFF: fstp    [esp+180h+var_138]
0x68BB03: fld     [esp+180h+var_140]
0x68BB07: fld     [esp+180h+var_170]
0x68BB0B: fld     st
0x68BB0D: fmulp   st(2), st
0x68BB0F: fxch    st(1)
0x68BB11: fstp    [esp+180h+var_120]
0x68BB15: mov     eax, [esp+180h+var_120]
0x68BB19: fld     [esp+180h+var_13C]
0x68BB1D: mov     [esp+180h+var_154], eax
0x68BB21: fmul    st, st(1)
0x68BB23: fstp    [esp+180h+var_11C]
0x68BB27: mov     ecx, [esp+180h+var_11C]
0x68BB2B: mov     [esp+180h+var_150], ecx
0x68BB2F: fmul    [esp+180h+var_138]
0x68BB33: fstp    [esp+180h+var_118]
0x68BB37: mov     edx, [esp+180h+var_118]
0x68BB3B: fld     [esp+180h+var_120]
0x68BB3F: mov     [esp+180h+var_14C], edx
0x68BB43: fld     st
0x68BB45: fadd    [esp+180h+var_168]
0x68BB49: fstp    [esp+180h+var_140]
0x68BB4D: mov     eax, [esp+180h+var_140]
0x68BB51: fld     [esp+180h+var_11C]
0x68BB55: mov     [esp+180h+var_168], eax
0x68BB59: fld     st
0x68BB5B: fadd    [esp+180h+var_164]
0x68BB5F: fstp    [esp+180h+var_13C]
0x68BB63: mov     ecx, [esp+180h+var_13C]
0x68BB67: fld     [esp+180h+var_118]
0x68BB6B: mov     [esp+180h+var_164], ecx
0x68BB6F: fld     st
0x68BB71: fadd    [esp+180h+var_160]
0x68BB75: fstp    [esp+180h+var_138]
0x68BB79: mov     edx, [esp+180h+var_138]
0x68BB7D: fld     st(1)
0x68BB7F: mov     [esp+180h+var_160], edx
0x68BB83: fmulp   st(2), st
0x68BB85: fld     st(2)
0x68BB87: fmulp   st(3), st
0x68BB89: fxch    st(1)
0x68BB8B: faddp   st(2), st
0x68BB8D: fmul    st, st
0x68BB8F: faddp   st(1), st
0x68BB91: fstp    [esp+180h+var_148]
0x68BB95: fld     [esp+180h+var_148]
0x68BB99: call    __CIsqrt
0x68BB9E: fstp    [esp+180h+var_148]
0x68BBA2: fld     [esp+180h+var_148]
0x68BBA6: fadd    [esp+180h+var_144]
0x68BBAA: mov     ebp, [esi]
0x68BBAC: lea     eax, [esp+180h+var_154]
0x68BBB0: push    eax
0x68BBB1: fstp    [esp+184h+var_144]
0x68BBB5: add     ebp, 1E8h
0x68BBBB: call    sub_683CB0
0x68BBC0: fstp    [esp+184h+var_184]
0x68BBC3: mov     edx, [ebp+0]
0x68BBC6: mov     ecx, esi
0x68BBC8: call    edx
0x68BBCA: cmp     ds:0B333B4h, esi
0x68BBD0: jnz     short loc_68BC34
0x68BBD2: mov     ecx, ebx
0x68BBD4: call    sub_42B410
0x68BBD9: test    eax, eax
0x68BBDB: mov     eax, offset aIncomplete; "INCOMPLETE"
0x68BBE0: jnz     short loc_68BBE7
0x68BBE2: mov     eax, offset aComplete; "COMPLETE"
0x68BBE7: fld     [esp+180h+arg_4]
0x68BBEE: push    eax; a4
0x68BBEF: mov     eax, [esi]
0x68BBF1: mov     edx, [eax+0D4h]
0x68BBF7: sub     esp, 18h
0x68BBFA: fstp    qword ptr [esp+19Ch+a2+4]; a2
0x68BBFE: mov     ecx, esi
0x68BC00: fld     [esp+19Ch+var_144]
0x68BC04: fstp    [esp+19Ch+var_198+4]
0x68BC08: fld     [esp+19Ch+var_124]
0x68BC0C: fstp    [esp+19Ch+var_1A0+4]
0x68BC0F: call    edx
0x68BC11: push    eax
0x68BC12: lea     eax, [esp+1A0h+Format]
0x68BC19: push    offset aActorSWithSpee; "Actor '%s' with speed %.2f pathed in Mi"...
0x68BC1E: push    eax
0x68BC1F: call    __sprintf
0x68BC24: lea     ecx, [esp+1A8h+Format]
0x68BC2B: push    ecx; Format
0x68BC2C: call    Interface_ConsolePrint
0x68BC31: add     esp, 2Ch
0x68BC34: mov     edx, [esp+180h+var_168]
0x68BC38: mov     ecx, [esp+180h+var_164]
0x68BC3C: sub     esp, 0Ch
0x68BC3F: mov     eax, esp
0x68BC41: mov     [eax], edx
0x68BC43: mov     edx, [esp+18Ch+var_160]
0x68BC47: mov     [eax+4], ecx
0x68BC4A: mov     ecx, esi; this
0x68BC4C: mov     [eax+8], edx
0x68BC4F: call    TESObjectREFR_SetPosition
0x68BC54: mov     eax, [esi]
0x68BC56: mov     edx, [eax+380h]
0x68BC5C: mov     ecx, esi
0x68BC5E: call    edx
0x68BC60: mov     ebp, eax
0x68BC62: test    ebp, ebp
0x68BC64: jz      short loc_68BC86
0x68BC66: mov     ecx, [esp+180h+var_168]
0x68BC6A: mov     edx, [esp+180h+var_164]
0x68BC6E: sub     esp, 0Ch
0x68BC71: mov     eax, esp
0x68BC73: mov     [eax], ecx
0x68BC75: mov     ecx, [esp+18Ch+var_160]
0x68BC79: mov     [eax+4], edx
0x68BC7C: mov     [eax+8], ecx
0x68BC7F: mov     ecx, ebp; this
0x68BC81: call    TESObjectREFR_SetPosition
0x68BC86: cmp     [esp+180h+var_16A], 0
0x68BC8B: jz      short loc_68BCA5
0x68BC8D: mov     ecx, esi; this
0x68BC8F: call    TESObjectREFR_GetWorldSpace
0x68BC94: mov     ecx, ds:0B333A0h
0x68BC9A: mov     ebx, eax
0x68BC9C: call    TES__GetCurrentWorldspace
0x68BCA1: cmp     ebx, eax
0x68BCA3: jz      short loc_68BCCB
0x68BCA5: fld     dword ptr ds:0A32048h
0x68BCAB: push    ecx
0x68BCAC: mov     ecx, esi
0x68BCAE: fstp    [esp+184h+var_184]; float
0x68BCB1: call    sub_4D89D0
0x68BCB6: test    ebp, ebp
0x68BCB8: jz      short loc_68BCCB
0x68BCBA: fld     dword ptr ds:0A32048h
0x68BCC0: push    ecx
0x68BCC1: mov     ecx, ebp
0x68BCC3: fstp    [esp+188h+var_188]; float
0x68BCC6: call    sub_4D89D0
0x68BCCB: test    edi, edi
0x68BCCD: jnz     short loc_68BCDD
0x68BCCF: mov     edx, [esi]
0x68BCD1: mov     eax, [edx+180h]
0x68BCD7: push    1
0x68BCD9: mov     ecx, esi
0x68BCDB: call    eax
0x68BCDD: mov     ecx, esi; this
0x68BCDF: call    TESObjectREFR_GetParentCell
0x68BCE4: mov     edi, [esp+18Ch+var_134]
0x68BCE8: cmp     edi, eax
0x68BCEA: jz      short loc_68BD14
0x68BCEC: test    ebp, ebp
0x68BCEE: jz      short loc_68BD02
0x68BCF0: mov     ecx, ebp; this
0x68BCF2: call    TESObjectREFR_GetWorldSpace
0x68BCF7: push    eax; int
0x68BCF8: push    edi; int
0x68BCF9: push    ebp; Concurrency::details::SchedulerBase *
0x68BCFA: call    sub_4DD4B0
0x68BCFF: add     esp, 0Ch
0x68BD02: mov     ecx, esi; this
0x68BD04: call    TESObjectREFR_GetWorldSpace
0x68BD09: push    eax; int
0x68BD0A: push    edi; int
0x68BD0B: push    esi; Concurrency::details::SchedulerBase *
0x68BD0C: call    sub_4DD4B0
0x68BD11: add     esp, 0Ch
0x68BD14: fld     [esp+18Ch+var_164]
0x68BD18: jmp     short loc_68BD1C
0x68BD1A: fldz
0x68BD1C: mov     ecx, [esp+180h+var_4]
0x68BD23: pop     edi
0x68BD24: pop     esi
0x68BD25: pop     ebp
0x68BD26: pop     ebx
0x68BD27: xor     ecx, esp
0x68BD29: call    @__security_check_cookie@4; __security_check_cookie(x)
0x68BD2E: add     esp, 170h
0x68BD34: retn    8
