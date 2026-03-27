0x4EB3F0: push    ebp
0x4EB3F1: mov     ebp, esp
0x4EB3F3: and     esp, 0FFFFFFF8h
0x4EB3F6: sub     esp, 0BCh
0x4EB3FC: cmp     byte ptr ds:0B360A4h, 0
0x4EB403: push    ebx
0x4EB404: push    esi
0x4EB405: push    edi
0x4EB406: jnz     loc_4EBACB
0x4EB40C: mov     ebx, ds:0B35BF0h
0x4EB412: mov     edi, [ebp+arg_0]
0x4EB415: xor     esi, esi
0x4EB417: mov     eax, ebx
0x4EB419: shl     eax, 7
0x4EB41C: cmp     edi, esi
0x4EB41E: mov     [esp+0C8h+var_58], esi
0x4EB422: mov     dword ptr [esp+0C8h+var_6C], esi
0x4EB426: mov     [esp+0C8h+var_70], 0
0x4EB42B: mov     [esp+0C8h+var_64], 0
0x4EB430: mov     [esp+0C8h+var_8C], ebx
0x4EB434: mov     [esp+0C8h+var_4C], eax
0x4EB438: mov     [esp+0C8h+var_68], 8
0x4EB440: jz      loc_4EBACB
0x4EB446: mov     ecx, edi; this
0x4EB448: call    TESObjectCELL_GetWorldSpace
0x4EB44D: test    eax, eax
0x4EB44F: jz      loc_4EBACB
0x4EB455: mov     ecx, edi; this
0x4EB457: call    sub_4CE3C0
0x4EB45C: test    eax, eax
0x4EB45E: jz      loc_4EBACB
0x4EB464: mov     ecx, edi
0x4EB466: call    TESObjectCELL_GetWaterHeight
0x4EB46B: fstp    [esp+0C8h+var_48]
0x4EB472: mov     ecx, edi; this
0x4EB474: call    sub_4CE3C0
0x4EB479: mov     ecx, edi; this
0x4EB47B: mov     [esp+0C8h+var_88], eax
0x4EB47F: call    TESObjectCELL_GetXCoordinate
0x4EB484: mov     ecx, edi; this
0x4EB486: mov     [esp+0C8h+var_50], eax
0x4EB48A: call    TESObjectCELL_GetYCoordinate
0x4EB48F: fld     [ebp+arg_14]
0x4EB492: fstp    [esp+0C8h+var_84]
0x4EB496: lea     ecx, [esp+0C8h+var_84]
0x4EB49A: fld     [ebp+arg_18]
0x4EB49D: mov     [esp+0C8h+var_60], eax
0x4EB4A1: fstp    [esp+0C8h+var_80]
0x4EB4A5: call    sub_499020
0x4EB4AA: fstp    st
0x4EB4AC: mov     [esp+0C8h+var_90], esi
0x4EB4B0: fld     [ebp+arg_28]
0x4EB4B3: fadd    st, st
0x4EB4B5: fstp    [ebp+arg_28]
0x4EB4B8: jmp     short loc_4EB4C3
0x4EB4BA: align 10h
0x4EB4C0: mov     edi, [ebp+arg_0]
0x4EB4C3: push    0
0x4EB4C5: push    esi
0x4EB4C6: mov     ecx, edi
0x4EB4C8: call    sub_441800
0x4EB4CD: mov     edi, eax
0x4EB4CF: test    edi, edi
0x4EB4D1: jz      loc_4EBA99
0x4EB4D7: push    0
0x4EB4D9: push    0
0x4EB4DB: push    0
0x4EB4DD: push    0
0x4EB4DF: lea     ecx, [esp+0D8h+var_24]
0x4EB4E6: push    ecx
0x4EB4E7: mov     ecx, [esp+0DCh+var_88]
0x4EB4EB: call    sub_4C0530
0x4EB4F0: fld     [ebp+arg_8]
0x4EB4F3: mov     edx, [edi+20h]
0x4EB4F6: mov     eax, [edi+24h]
0x4EB4F9: mov     ecx, [edi+28h]
0x4EB4FC: mov     [esp+0C8h+var_34], edx
0x4EB503: fsub    [esp+0C8h+var_34]
0x4EB50A: mov     edx, [edi+2Ch]
0x4EB50D: mov     [esp+0C8h+var_30], eax
0x4EB514: fstp    [esp+0C8h+var_44]
0x4EB51B: mov     [esp+0C8h+var_2C], ecx
0x4EB522: fld     [ebp+arg_C]
0x4EB525: mov     [esp+0C8h+var_28], edx
0x4EB52C: fsub    [esp+0C8h+var_30]
0x4EB533: fstp    [esp+0C8h+var_40]
0x4EB53A: fld     [esp+0C8h+var_40]
0x4EB541: fld     [esp+0C8h+var_44]
0x4EB548: fmul    st, st
0x4EB54A: fld     st(1)
0x4EB54C: fmulp   st(2), st
0x4EB54E: faddp   st(1), st
0x4EB550: fstp    [esp+0C8h+var_9C]
0x4EB554: fld     [esp+0C8h+var_9C]
0x4EB558: call    __CIsqrt
0x4EB55D: fstp    [esp+0C8h+var_9C]
0x4EB561: fld     [esp+0C8h+var_9C]
0x4EB565: mov     [esp+0C8h+var_98], ebx
0x4EB569: fsub    [esp+0C8h+var_28]
0x4EB570: fstp    [esp+0C8h+var_9C]
0x4EB574: fld     [esp+0C8h+var_9C]
0x4EB578: fld     [ebp+arg_24]
0x4EB57B: fcompp
0x4EB57D: fnstsw  ax
0x4EB57F: test    ah, 41h
0x4EB582: jnz     loc_4EB9D4
0x4EB588: cmp     ebx, 10h
0x4EB58B: jge     loc_4EBA99
0x4EB591: lea     ecx, [ebx+ebx]
0x4EB594: mov     eax, ecx
0x4EB596: shl     eax, 4
0x4EB599: add     eax, ecx
0x4EB59B: mov     [esp+0C8h+var_54], eax
0x4EB59F: mov     eax, ebx
0x4EB5A1: shl     eax, 4
0x4EB5A4: add     eax, ebx
0x4EB5A6: mov     [esp+0C8h+var_74], eax
0x4EB5AA: jmp     short loc_4EB5B4
0x4EB5AC: align 10h
0x4EB5B0: mov     eax, [esp+0C8h+var_74]
0x4EB5B4: mov     ecx, [esp+0C8h+var_98]
0x4EB5B8: add     eax, ecx
0x4EB5BA: mov     [esp+0C8h+var_9C], ebx
0x4EB5BE: mov     [esp+0C8h+var_7C], eax
0x4EB5C2: mov     edx, [esp+0C8h+var_7C]
0x4EB5C6: mov     ecx, [esp+0C8h+var_88]
0x4EB5CA: push    0
0x4EB5CC: push    0; float
0x4EB5CE: push    edx; float
0x4EB5CF: push    esi
0x4EB5D0: lea     eax, [esp+0D8h+var_C]
0x4EB5D7: push    eax
0x4EB5D8: call    sub_4C0530
0x4EB5DD: fld     [ebp+arg_8]
0x4EB5E0: mov     ecx, [eax]
0x4EB5E2: fld     st
0x4EB5E4: mov     edx, [eax+4]
0x4EB5E7: mov     [esp+0C8h+var_B0], ecx
0x4EB5EB: fld     [esp+0C8h+var_B0]
0x4EB5EF: fld     st
0x4EB5F1: mov     edi, [eax+8]
0x4EB5F4: fsubp   st(2), st
0x4EB5F6: mov     [esp+0C8h+var_AC], edx
0x4EB5FA: fxch    st(1)
0x4EB5FC: mov     [esp+0C8h+var_A8], edi
0x4EB600: fstp    [esp+0C8h+var_94]
0x4EB604: fld     [ebp+arg_C]
0x4EB607: fld     st
0x4EB609: fld     [esp+0C8h+var_AC]
0x4EB60D: fld     st
0x4EB60F: fsubp   st(2), st
0x4EB611: fxch    st(1)
0x4EB613: fstp    [esp+0C8h+var_B8]
0x4EB617: fld     [esp+0C8h+var_B8]
0x4EB61B: fld     [esp+0C8h+var_94]
0x4EB61F: fmul    st, st
0x4EB621: fld     st(1)
0x4EB623: fmulp   st(2), st
0x4EB625: faddp   st(1), st
0x4EB627: fcomp   qword ptr ds:0A47B18h
0x4EB62D: fnstsw  ax
0x4EB62F: test    ah, 41h
0x4EB632: jnz     loc_4EB82B
0x4EB638: fild    [esp+0C8h+var_4C]
0x4EB63C: lea     ecx, [esp+0C8h+var_A4]
0x4EB640: fstp    [esp+0C8h+var_78]
0x4EB644: fld     [esp+0C8h+var_78]
0x4EB648: fld     st
0x4EB64A: fsubrp  st(5), st
0x4EB64C: fxch    st(4)
0x4EB64E: fstp    [esp+0C8h+var_3C]
0x4EB655: fxch    st(3)
0x4EB657: fsubrp  st(1), st
0x4EB659: fstp    [esp+0C8h+var_38]
0x4EB660: fadd    [esp+0C8h+var_3C]
0x4EB667: fstp    [esp+0C8h+var_94]
0x4EB66B: fld     [esp+0C8h+var_94]
0x4EB66F: fstp    [esp+0C8h+var_A4]
0x4EB673: fadd    [esp+0C8h+var_38]
0x4EB67A: fstp    [esp+0C8h+var_B4]
0x4EB67E: fld     [esp+0C8h+var_B4]
0x4EB682: fstp    [esp+0C8h+var_A0]
0x4EB686: call    sub_499020
0x4EB68B: fstp    st
0x4EB68D: fld     [esp+0C8h+var_A0]
0x4EB691: fmul    [esp+0C8h+var_80]
0x4EB695: fld     [esp+0C8h+var_A4]
0x4EB699: fmul    [esp+0C8h+var_84]
0x4EB69D: faddp   st(1), st
0x4EB69F: fstp    [esp+0C8h+var_B8]
0x4EB6A3: fld     [esp+0C8h+var_B8]
0x4EB6A7: call    __CIacos
0x4EB6AC: fstp    [esp+0C8h+var_B8]
0x4EB6B0: fld     [esp+0C8h+var_B8]
0x4EB6B4: fld     [ebp+arg_28]
0x4EB6B7: fcompp
0x4EB6B9: fnstsw  ax
0x4EB6BB: test    ah, 5
0x4EB6BE: jp      loc_4EB821
0x4EB6C4: fld     [esp+0C8h+var_B0]
0x4EB6C8: lea     ecx, [esp+0C8h+var_A4]
0x4EB6CC: fsub    [esp+0C8h+var_78]
0x4EB6D0: fsub    [ebp+arg_8]
0x4EB6D3: fstp    [esp+0C8h+var_B8]
0x4EB6D7: fld     [esp+0C8h+var_B8]
0x4EB6DB: fstp    [esp+0C8h+var_A4]
0x4EB6DF: fld     [esp+0C8h+var_B4]
0x4EB6E3: fstp    [esp+0C8h+var_A0]
0x4EB6E7: call    sub_499020
0x4EB6EC: fstp    st
0x4EB6EE: fld     [esp+0C8h+var_A0]
0x4EB6F2: fmul    [esp+0C8h+var_80]
0x4EB6F6: fld     [esp+0C8h+var_A4]
0x4EB6FA: fmul    [esp+0C8h+var_84]
0x4EB6FE: faddp   st(1), st
0x4EB700: fstp    [esp+0C8h+var_B4]
0x4EB704: fld     [esp+0C8h+var_B4]
0x4EB708: call    __CIacos
0x4EB70D: fstp    [esp+0C8h+var_B4]
0x4EB711: fld     [esp+0C8h+var_B4]
0x4EB715: fld     [ebp+arg_28]
0x4EB718: fcompp
0x4EB71A: fnstsw  ax
0x4EB71C: test    ah, 5
0x4EB71F: jp      loc_4EB821
0x4EB725: fld     [esp+0C8h+var_94]
0x4EB729: lea     ecx, [esp+0C8h+var_A4]
0x4EB72D: fstp    [esp+0C8h+var_A4]
0x4EB731: fld     [esp+0C8h+var_AC]
0x4EB735: fsub    [esp+0C8h+var_78]
0x4EB739: fsub    [ebp+arg_C]
0x4EB73C: fstp    [esp+0C8h+var_94]
0x4EB740: fld     [esp+0C8h+var_94]
0x4EB744: fstp    [esp+0C8h+var_A0]
0x4EB748: call    sub_499020
0x4EB74D: fstp    st
0x4EB74F: fld     [esp+0C8h+var_A0]
0x4EB753: fmul    [esp+0C8h+var_80]
0x4EB757: fld     [esp+0C8h+var_A4]
0x4EB75B: fmul    [esp+0C8h+var_84]
0x4EB75F: faddp   st(1), st
0x4EB761: fstp    [esp+0C8h+var_B4]
0x4EB765: fld     [esp+0C8h+var_B4]
0x4EB769: call    __CIacos
0x4EB76E: fstp    [esp+0C8h+var_B4]
0x4EB772: fld     [esp+0C8h+var_B4]
0x4EB776: fld     [ebp+arg_28]
0x4EB779: fcompp
0x4EB77B: fnstsw  ax
0x4EB77D: test    ah, 5
0x4EB780: jp      loc_4EB821
0x4EB786: fld     [esp+0C8h+var_B8]
0x4EB78A: lea     ecx, [esp+0C8h+var_A4]
0x4EB78E: fstp    [esp+0C8h+var_A4]
0x4EB792: fld     [esp+0C8h+var_94]
0x4EB796: fstp    [esp+0C8h+var_A0]
0x4EB79A: call    sub_499020
0x4EB79F: fstp    st
0x4EB7A1: fld     [esp+0C8h+var_A0]
0x4EB7A5: fmul    [esp+0C8h+var_80]
0x4EB7A9: fld     [esp+0C8h+var_A4]
0x4EB7AD: fmul    [esp+0C8h+var_84]
0x4EB7B1: faddp   st(1), st
0x4EB7B3: fstp    [esp+0C8h+var_B8]
0x4EB7B7: fld     [esp+0C8h+var_B8]
0x4EB7BB: call    __CIacos
0x4EB7C0: fstp    [esp+0C8h+var_B8]
0x4EB7C4: fld     [esp+0C8h+var_B8]
0x4EB7C8: fld     [ebp+arg_28]
0x4EB7CB: fcompp
0x4EB7CD: fnstsw  ax
0x4EB7CF: test    ah, 5
0x4EB7D2: jp      short loc_4EB821
0x4EB7D4: fld     [esp+0C8h+var_B0]
0x4EB7D8: sub     esp, 0Ch
0x4EB7DB: fld     qword ptr ds:0A3B1B8h
0x4EB7E1: mov     eax, esp
0x4EB7E3: fsub    st(1), st
0x4EB7E5: fxch    st(1)
0x4EB7E7: fstp    [esp+0D4h+var_B0]
0x4EB7EB: mov     ecx, [esp+0D4h+var_B0]
0x4EB7EF: mov     [eax], ecx
0x4EB7F1: fsubr   [esp+0D4h+var_AC]
0x4EB7F5: fstp    [esp+0D4h+var_AC]
0x4EB7F9: mov     edx, [esp+0D4h+var_AC]
0x4EB7FD: fld     [ebp+arg_10]
0x4EB800: mov     [eax+4], edx
0x4EB803: fstp    [esp+0D4h+var_A8]
0x4EB807: mov     ecx, [esp+0D4h+var_A8]
0x4EB80B: mov     [eax+8], ecx
0x4EB80E: call    sub_7C2990
0x4EB813: push    eax
0x4EB814: call    sub_7C3980
0x4EB819: add     esp, 10h
0x4EB81C: jmp     loc_4EB99E
0x4EB821: fld     [esp+0C8h+var_AC]
0x4EB825: fld     [esp+0C8h+var_B0]
0x4EB829: jmp     short loc_4EB82F
0x4EB82B: fstp    st(1)
0x4EB82D: fstp    st(2)
0x4EB82F: fld     qword ptr ds:0A3B1B8h
0x4EB835: sub     esp, 0Ch
0x4EB838: fsub    st(1), st
0x4EB83A: mov     eax, esp
0x4EB83C: fxch    st(1)
0x4EB83E: fstp    [esp+0D4h+var_B0]
0x4EB842: mov     edx, [esp+0D4h+var_B0]
0x4EB846: mov     [eax], edx
0x4EB848: fsubp   st(1), st
0x4EB84A: fstp    [esp+0D4h+var_AC]
0x4EB84E: mov     ecx, [esp+0D4h+var_AC]
0x4EB852: mov     [eax+4], ecx
0x4EB855: mov     [eax+8], edi
0x4EB858: call    sub_7C2990
0x4EB85D: mov     edx, [esp+0D4h+var_7C]
0x4EB861: mov     ecx, [esp+0D4h+var_88]
0x4EB865: add     esp, 0Ch
0x4EB868: push    edx
0x4EB869: push    esi
0x4EB86A: mov     [esp+0D0h+var_B8], eax
0x4EB86E: call    sub_4C1030
0x4EB873: mov     ebx, eax
0x4EB875: xor     edi, edi
0x4EB877: test    ebx, ebx
0x4EB879: jz      loc_4EB996
0x4EB87F: nop
0x4EB880: cmp     edi, 10h
0x4EB883: jge     loc_4EB996
0x4EB889: mov     eax, [ebx+edi*4]
0x4EB88C: test    eax, eax
0x4EB88E: jz      loc_4EB996
0x4EB894: cmp     dword ptr [eax], 0
0x4EB897: jz      loc_4EB996
0x4EB89D: mov     ecx, [esp+0C8h+var_B8]
0x4EB8A1: mov     edx, [eax+4]
0x4EB8A4: push    ecx
0x4EB8A5: push    edx
0x4EB8A6: call    sub_7C2EC0
0x4EB8AB: add     esp, 8
0x4EB8AE: test    al, al
0x4EB8B0: jnz     loc_4EB98E
0x4EB8B6: mov     eax, [ebx+edi*4]
0x4EB8B9: mov     ecx, [eax+4]
0x4EB8BC: push    ecx
0x4EB8BD: mov     ecx, ds:0B33A98h
0x4EB8C3: call    TESDataHandler_LookupFormByID
0x4EB8C8: mov     esi, eax
0x4EB8CA: test    esi, esi
0x4EB8CC: jz      short loc_4EB911
0x4EB8CE: mov     edx, [esi]
0x4EB8D0: mov     eax, [edx+140h]
0x4EB8D6: mov     ecx, esi
0x4EB8D8: call    eax
0x4EB8DA: mov     edx, [esi]
0x4EB8DC: movzx   ecx, ax
0x4EB8DF: mov     eax, [edx+148h]
0x4EB8E5: mov     dword ptr [esp+0C8h+var_6C], ecx
0x4EB8E9: mov     ecx, esi
0x4EB8EB: call    eax
0x4EB8ED: mov     edx, [esi]
0x4EB8EF: mov     [esp+0C8h+var_68], eax
0x4EB8F3: mov     eax, [edx+130h]
0x4EB8F9: mov     ecx, esi
0x4EB8FB: call    eax
0x4EB8FD: mov     edx, [esi]
0x4EB8FF: mov     [esp+0C8h+var_64], al
0x4EB903: mov     eax, [edx+128h]
0x4EB909: mov     ecx, esi
0x4EB90B: call    eax
0x4EB90D: mov     [esp+0C8h+var_70], al
0x4EB911: mov     ecx, dword ptr [esp+0C8h+var_64]
0x4EB915: fld     [esp+0C8h+var_48]
0x4EB91C: mov     edx, dword ptr [esp+0C8h+var_70]
0x4EB920: mov     eax, [ebx+edi*4]
0x4EB923: push    ecx; char
0x4EB924: push    edx; char
0x4EB925: mov     edx, dword ptr [esp+0D0h+var_6C]
0x4EB929: push    ecx
0x4EB92A: mov     ecx, [esp+0D4h+var_68]
0x4EB92E: fstp    [esp+0D4h+var_D4]; float
0x4EB931: fld     [ebp+arg_24]
0x4EB934: push    ecx; int
0x4EB935: push    edx; __int16
0x4EB936: mov     edx, [ebp+arg_8]
0x4EB939: sub     esp, 8
0x4EB93C: fstp    [esp+0E4h+var_E0]; int
0x4EB940: lea     ecx, [eax+20h]
0x4EB943: fld     [ebp+arg_20]
0x4EB946: fstp    [esp+0E4h+var_E4]; int
0x4EB949: push    ecx; int
0x4EB94A: mov     ecx, [ebp+arg_C]
0x4EB94D: push    eax; int
0x4EB94E: sub     esp, 0Ch
0x4EB951: mov     eax, esp
0x4EB953: mov     [eax], edx
0x4EB955: mov     edx, [ebp+arg_10]
0x4EB958: mov     [eax+4], ecx
0x4EB95B: mov     [eax+8], edx
0x4EB95E: mov     eax, [ebp+arg_4]
0x4EB961: mov     edx, [esp+0F8h+var_B8]
0x4EB965: push    eax; int
0x4EB966: mov     eax, [esp+0FCh+var_88]
0x4EB96A: lea     ecx, [esp+0FCh+var_B0]
0x4EB96E: push    ecx; int
0x4EB96F: mov     ecx, [esp+100h+var_90]
0x4EB973: push    edx; int
0x4EB974: mov     edx, [esp+104h+var_60]
0x4EB97B: push    eax; int
0x4EB97C: mov     eax, [esp+108h+var_50]
0x4EB983: push    ecx; int
0x4EB984: push    edx; int
0x4EB985: push    eax; int
0x4EB986: call    sub_4EA8A0
0x4EB98B: add     esp, 4Ch
0x4EB98E: add     edi, 1
0x4EB991: jmp     loc_4EB880
0x4EB996: mov     esi, [esp+0C8h+var_90]
0x4EB99A: mov     ebx, [esp+0C8h+var_8C]
0x4EB99E: mov     ecx, [esp+0C8h+var_9C]
0x4EB9A2: mov     edx, [esp+0C8h+var_54]
0x4EB9A6: add     [esp+0C8h+var_7C], edx
0x4EB9AA: lea     eax, [ebx+ebx]
0x4EB9AD: add     ecx, eax
0x4EB9AF: cmp     ecx, 10h
0x4EB9B2: mov     [esp+0C8h+var_9C], ecx
0x4EB9B6: jl      loc_4EB5C2
0x4EB9BC: mov     ecx, [esp+0C8h+var_98]
0x4EB9C0: add     ecx, eax
0x4EB9C2: cmp     ecx, 10h
0x4EB9C5: mov     [esp+0C8h+var_98], ecx
0x4EB9C9: jl      loc_4EB5B0
0x4EB9CF: jmp     loc_4EBA99
0x4EB9D4: cmp     ebx, 10h
0x4EB9D7: jge     loc_4EBA99
0x4EB9DD: lea     eax, [ebx+ebx]
0x4EB9E0: mov     esi, eax
0x4EB9E2: shl     esi, 4
0x4EB9E5: add     esi, eax
0x4EB9E7: mov     eax, ebx
0x4EB9E9: shl     eax, 4
0x4EB9EC: add     eax, ebx
0x4EB9EE: mov     [esp+0C8h+var_74], eax
0x4EB9F2: jmp     short loc_4EB9F8
0x4EB9F4: mov     eax, [esp+0C8h+var_74]
0x4EB9F8: mov     ecx, [esp+0C8h+var_98]
0x4EB9FC: mov     edi, ebx
0x4EB9FE: lea     ebx, [eax+ecx]
0x4EBA01: mov     edx, [esp+0C8h+var_90]
0x4EBA05: mov     ecx, [esp+0C8h+var_88]
0x4EBA09: push    0
0x4EBA0B: push    0; float
0x4EBA0D: push    ebx; float
0x4EBA0E: push    edx
0x4EBA0F: lea     eax, [esp+0D8h+var_18]
0x4EBA16: push    eax
0x4EBA17: call    sub_4C0530
0x4EBA1C: mov     ecx, [eax]
0x4EBA1E: mov     edx, [eax+4]
0x4EBA21: mov     eax, [eax+8]
0x4EBA24: mov     [esp+0C8h+var_B0], ecx
0x4EBA28: fld     [esp+0C8h+var_B0]
0x4EBA2C: fld     qword ptr ds:0A3B1B8h
0x4EBA32: mov     [esp+0C8h+var_AC], edx
0x4EBA36: fsub    st(1), st
0x4EBA38: sub     esp, 0Ch
0x4EBA3B: fxch    st(1)
0x4EBA3D: mov     ecx, esp
0x4EBA3F: fstp    [esp+0D4h+var_B0]
0x4EBA43: mov     edx, [esp+0D4h+var_B0]
0x4EBA47: mov     [ecx], edx
0x4EBA49: fsubr   [esp+0D4h+var_AC]
0x4EBA4D: fstp    [esp+0D4h+var_AC]
0x4EBA51: mov     edx, [esp+0D4h+var_AC]
0x4EBA55: mov     [ecx+4], edx
0x4EBA58: mov     [ecx+8], eax
0x4EBA5B: call    sub_7C2990
0x4EBA60: push    eax
0x4EBA61: call    sub_7C3980
0x4EBA66: mov     eax, [esp+0D8h+var_8C]
0x4EBA6A: add     eax, eax
0x4EBA6C: add     edi, eax
0x4EBA6E: add     esp, 10h
0x4EBA71: add     ebx, esi
0x4EBA73: cmp     edi, 10h
0x4EBA76: jl      short loc_4EBA01
0x4EBA78: mov     ecx, [esp+0C8h+var_8C]
0x4EBA7C: mov     eax, [esp+0C8h+var_98]
0x4EBA80: mov     ebx, [esp+0C8h+var_8C]
0x4EBA84: add     ecx, ecx
0x4EBA86: add     eax, ecx
0x4EBA88: cmp     eax, 10h
0x4EBA8B: mov     [esp+0C8h+var_98], eax
0x4EBA8F: jl      loc_4EB9F4
0x4EBA95: mov     esi, [esp+0C8h+var_90]
0x4EBA99: mov     eax, [esp+0C8h+var_58]
0x4EBA9D: test    eax, eax
0x4EBA9F: jz      short loc_4EBABB
0x4EBAA1: jmp     short loc_4EBAA7
0x4EBAA3: mov     eax, [esp+0C8h+var_58]
0x4EBAA7: mov     edi, [eax+4]
0x4EBAAA: push    eax
0x4EBAAB: call    FormHeapFree
0x4EBAB0: add     esp, 4
0x4EBAB3: test    edi, edi
0x4EBAB5: mov     [esp+0C8h+var_58], edi
0x4EBAB9: jnz     short loc_4EBAA3
0x4EBABB: add     esi, 1
0x4EBABE: cmp     esi, 4
0x4EBAC1: mov     [esp+0C8h+var_90], esi
0x4EBAC5: jl      loc_4EB4C0
0x4EBACB: pop     edi
0x4EBACC: pop     esi
0x4EBACD: pop     ebx
0x4EBACE: mov     esp, ebp
0x4EBAD0: pop     ebp
0x4EBAD1: retn
