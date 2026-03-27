0x677EC0: sub     esp, 24h
0x677EC3: push    ebp
0x677EC4: mov     ebp, ecx
0x677EC6: lea     ecx, [ebp+68h]; this
0x677EC9: mov     [esp+28h+var_8], ebp
0x677ECD: mov     byte ptr ds:0B3B935h, 0
0x677ED4: call    sub_7616D0
0x677ED9: fldz
0x677EDB: xor     edx, edx
0x677EDD: fstp    [esp+28h+var_24]
0x677EE1: mov     ecx, eax
0x677EE3: test    ecx, ecx
0x677EE5: mov     [ebp+78h], eax
0x677EE8: mov     [esp+28h+var_18], edx
0x677EEC: jz      short loc_677F03
0x677EEE: mov     edi, edi
0x677EF0: cmp     dword ptr [ecx], 0
0x677EF3: jz      short loc_677EF8
0x677EF5: add     edx, 1
0x677EF8: mov     ecx, [ecx+4]
0x677EFB: test    ecx, ecx
0x677EFD: jnz     short loc_677EF0
0x677EFF: mov     [esp+28h+var_18], edx
0x677F03: test    eax, eax
0x677F05: mov     [ebp+0A8h], edx
0x677F0B: jz      loc_678371
0x677F11: push    ebx
0x677F12: push    esi
0x677F13: push    edi
0x677F14: mov     eax, [ebp+78h]
0x677F17: cmp     dword ptr [eax+4], 0
0x677F1B: jnz     short loc_677F26
0x677F1D: cmp     dword ptr [eax], 0
0x677F20: jz      loc_67836E
0x677F26: mov     esi, [eax]
0x677F28: test    esi, esi
0x677F2A: jz      loc_678364
0x677F30: mov     eax, [esi+8]
0x677F33: mov     ecx, eax
0x677F35: shr     ecx, 15h
0x677F38: test    cl, 1
0x677F3B: jnz     loc_678364
0x677F41: mov     edx, eax
0x677F43: shr     edx, 5
0x677F46: test    dl, 1
0x677F49: jnz     loc_678331
0x677F4F: shr     eax, 0Bh
0x677F52: test    al, 1
0x677F54: jnz     loc_678331
0x677F5A: cmp     dword ptr [esi+58h], 0
0x677F5E: jz      loc_678331
0x677F64: mov     ecx, esi; this
0x677F66: call    Actor__GetProcessLevel
0x677F6B: test    eax, eax
0x677F6D: jnz     loc_678331
0x677F73: push    eax
0x677F74: mov     eax, ds:0B333C4h
0x677F79: push    eax
0x677F7A: mov     ecx, esi
0x677F7C: call    TesObjectREF_GetDistance
0x677F81: fstp    [esp+34h+var_C]
0x677F85: mov     edx, [esi]
0x677F87: mov     eax, [edx+190h]
0x677F8D: mov     ecx, esi
0x677F8F: xor     edi, edi
0x677F91: mov     bl, 1
0x677F93: call    eax
0x677F95: test    al, al
0x677F97: jz      short loc_677FF2
0x677F99: mov     ecx, esi
0x677F9B: mov     edi, esi
0x677F9D: call    sub_5F1330
0x677FA2: test    al, al
0x677FA4: jz      short loc_677FCB
0x677FA6: mov     ecx, [esi+58h]
0x677FA9: mov     edx, [ecx]
0x677FAB: mov     eax, [edx+18h]
0x677FAE: push    0
0x677FB0: push    esi
0x677FB1: call    eax
0x677FB3: mov     ecx, [esi+58h]
0x677FB6: mov     byte ptr [ecx+1D1h], 1
0x677FBD: mov     ecx, [esi+58h]
0x677FC0: mov     edx, [ecx]
0x677FC2: mov     eax, [edx+20h]
0x677FC5: xor     bl, bl
0x677FC7: call    eax
0x677FC9: jmp     short loc_678006
0x677FCB: mov     ecx, esi; this
0x677FCD: call    MobileObject_GetCharProxy
0x677FD2: test    eax, eax
0x677FD4: jnz     short loc_677FF2
0x677FD6: mov     edx, [esi]
0x677FD8: mov     eax, [edx+154h]
0x677FDE: mov     ecx, esi
0x677FE0: call    eax
0x677FE2: test    eax, eax
0x677FE4: jz      short loc_677FF2
0x677FE6: mov     edx, [esi]
0x677FE8: mov     eax, [edx+148h]
0x677FEE: mov     ecx, esi
0x677FF0: call    eax
0x677FF2: mov     edx, [esi]
0x677FF4: fld     [esp+30h+arg_4]
0x677FF8: mov     eax, [edx+1C0h]
0x677FFE: push    ecx
0x677FFF: mov     ecx, esi
0x678001: fstp    [esp+34h+var_34]
0x678004: call    eax
0x678006: test    edi, edi
0x678008: jz      short loc_67804E
0x67800A: mov     ecx, ds:0B333C4h; this
0x678010: call    PlayerCharacter__IsSleeping?
0x678015: test    al, al
0x678017: jz      short loc_67804E
0x678019: fld     dword ptr ds:0A379B4h
0x67801F: push    ecx
0x678020: mov     ecx, edi
0x678022: fstp    [esp+38h+var_38]
0x678025: call    sub_5F2530
0x67802A: fld     dword ptr ds:0A379B4h
0x678030: push    1; float
0x678032: push    ecx
0x678033: mov     ecx, edi
0x678035: fstp    [esp+3Ch+var_3C]; float
0x678038: call    sub_5F25F0
0x67803D: fld     dword ptr ds:0A379B4h
0x678043: push    ecx
0x678044: mov     ecx, edi
0x678046: fstp    [esp+38h+var_38]; float
0x678049: call    sub_5F2720
0x67804E: mov     ecx, esi; this
0x678050: call    Actor__GetProcessLevel
0x678055: test    eax, eax
0x678057: jz      short loc_678060
0x678059: mov     dword ptr [ebp+78h], 0
0x678060: mov     edx, [esi]
0x678062: mov     eax, [edx+170h]
0x678068: mov     ecx, esi
0x67806A: call    eax
0x67806C: test    eax, eax
0x67806E: jz      loc_678169
0x678074: mov     ecx, esi; this
0x678076: call    Actor__GetProcessLevel
0x67807B: test    eax, eax
0x67807D: jnz     loc_678169
0x678083: mov     edx, [esi]
0x678085: mov     eax, [edx+190h]
0x67808B: mov     ecx, esi
0x67808D: call    eax
0x67808F: test    al, al
0x678091: jz      loc_678169
0x678097: cmp     esi, ds:0B333C4h
0x67809D: jz      loc_678169
0x6780A3: mov     ecx, ds:0B33B00h
0x6780A9: call    sub_45A500
0x6780AE: test    al, al
0x6780B0: jnz     loc_678169
0x6780B6: mov     edx, [esi]
0x6780B8: mov     eax, [edx+1D8h]
0x6780BE: mov     ecx, esi
0x6780C0: call    eax
0x6780C2: fcomp   dword ptr ds:0A2FAA8h
0x6780C8: fnstsw  ax
0x6780CA: test    ah, 5
0x6780CD: jp      loc_67815D
0x6780D3: mov     ecx, esi; this
0x6780D5: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x6780DA: cmp     eax, 3
0x6780DD: jz      short loc_67815D
0x6780DF: mov     edx, [esi]
0x6780E1: mov     eax, [edx+198h]
0x6780E7: push    0
0x6780E9: mov     ecx, esi
0x6780EB: call    eax
0x6780ED: test    al, al
0x6780EF: jnz     short loc_67815D
0x6780F1: mov     edx, [esi]
0x6780F3: fld     [esp+34h+var_24]
0x6780F7: mov     eax, [edx+1D4h]
0x6780FD: push    ecx
0x6780FE: mov     ecx, esi
0x678100: fstp    [esp+38h+var_38]
0x678103: call    eax
0x678105: test    edi, edi
0x678107: jz      short loc_678135
0x678109: mov     ecx, offset flt_B36CD8
0x67810E: call    GameSetting_GetSafeFloatPointer
0x678113: fld     [esp+34h+var_C]
0x678117: fld     dword ptr [eax]
0x678119: fcomp   st(1)
0x67811B: fnstsw  ax
0x67811D: test    ah, 41h
0x678120: jnz     short loc_678133
0x678122: push    ecx
0x678123: fstp    [esp+38h+var_38]
0x678126: push    edi
0x678127: mov     ecx, offset ActorProcessManager_ptr
0x67812C: call    sub_674820
0x678131: jmp     short loc_678135
0x678133: fstp    st
0x678135: mov     ecx, [esp+34h+var_18]
0x678139: fild    [esp+34h+var_18]
0x67813D: test    ecx, ecx
0x67813F: jge     short loc_678147
0x678141: fadd    dword ptr ds:0A2FC78h
0x678147: fmul    qword ptr ds:0A3C770h
0x67814D: fmul    dword ptr ds:0B33E9Ch
0x678153: fadd    [esp+34h+var_24]
0x678157: fstp    [esp+34h+var_24]
0x67815B: jmp     short loc_678169
0x67815D: mov     edx, [esi]
0x67815F: mov     eax, [edx+1DCh]
0x678165: mov     ecx, esi
0x678167: call    eax
0x678169: test    bl, bl
0x67816B: jz      loc_678331
0x678171: lea     edi, [esi+44h]
0x678174: test    edi, edi
0x678176: mov     [esp+34h+var_10], edi
0x67817A: jz      loc_678331
0x678180: mov     ecx, edi
0x678182: call    GetExtraDataFollower
0x678187: test    eax, eax
0x678189: mov     [esp+34h+var_C], eax
0x67818D: jz      loc_678331
0x678193: push    8; Size
0x678195: call    FormHeapAlloc
0x67819A: xor     esi, esi
0x67819C: add     esp, 4
0x67819F: cmp     eax, esi
0x6781A1: jz      short loc_6781AE
0x6781A3: mov     [eax], esi
0x6781A5: mov     [eax+4], esi
0x6781A8: mov     [esp+34h+var_1C], eax
0x6781AC: jmp     short loc_6781B2
0x6781AE: mov     [esp+34h+var_1C], esi
0x6781B2: push    8; Size
0x6781B4: call    FormHeapAlloc
0x6781B9: add     esp, 4
0x6781BC: cmp     eax, esi
0x6781BE: jz      short loc_6781CD
0x6781C0: mov     ebp, eax
0x6781C2: mov     [eax], esi
0x6781C4: mov     [eax+4], esi
0x6781C7: mov     [esp+34h+var_20], ebp
0x6781CB: jmp     short loc_6781D3
0x6781CD: mov     [esp+34h+var_20], esi
0x6781D1: mov     ebp, esi
0x6781D3: mov     ecx, [esp+34h+var_C]
0x6781D7: mov     esi, [ecx+0Ch]
0x6781DA: test    esi, esi
0x6781DC: mov     ebx, ebp
0x6781DE: jz      short loc_6781F5
0x6781E0: mov     eax, [esi]
0x6781E2: test    eax, eax
0x6781E4: jz      short loc_6781F5
0x6781E6: push    eax
0x6781E7: mov     ecx, ebp
0x6781E9: call    BSSimpleList_PushBack
0x6781EE: mov     esi, [esi+4]
0x6781F1: test    esi, esi
0x6781F3: jnz     short loc_6781E0
0x6781F5: test    ebp, ebp
0x6781F7: jz      loc_6782D7
0x6781FD: lea     ecx, [ecx+0]
0x678200: mov     esi, [ebx]
0x678202: test    esi, esi
0x678204: jz      loc_6782D7
0x67820A: cmp     esi, ds:0B333C4h
0x678210: jz      loc_6782C8
0x678216: cmp     dword ptr [esi+58h], 0
0x67821A: jz      loc_6782C8
0x678220: mov     ecx, esi
0x678222: call    sub_5E03A0
0x678227: lea     ecx, [esi+44h]
0x67822A: mov     edi, eax
0x67822C: call    ExtraDataList__GetExtraPackage
0x678231: test    eax, eax
0x678233: jz      short loc_678237
0x678235: mov     edi, eax
0x678237: test    edi, edi
0x678239: jz      loc_6782BE
0x67823F: mov     al, [edi+20h]
0x678242: cmp     al, 1
0x678244: jz      short loc_67824A
0x678246: cmp     al, 7
0x678248: jnz     short loc_6782BE
0x67824A: mov     ecx, esi; this
0x67824C: call    Actor__GetProcessLevel
0x678251: mov     ecx, eax
0x678253: test    ecx, ecx
0x678255: jz      short loc_6782C8
0x678257: fld     [esp+34h+arg_0]
0x67825B: fst     [esp+34h+var_14]
0x67825F: fldz
0x678261: fcompp
0x678263: fnstsw  ax
0x678265: test    ah, 1
0x678268: jnz     short loc_678274
0x67826A: fld     dword ptr ds:0A71E4Ch
0x678270: fstp    [esp+34h+var_14]
0x678274: cmp     ecx, 3
0x678277: jnz     short loc_6782A8
0x678279: mov     ebp, [esi+58h]
0x67827C: mov     edi, [ebp+0]
0x67827F: mov     ecx, offset TimeGlobals
0x678284: add     edi, 1Ch
0x678287: call    TimeGlobals_GetGameHour
0x67828C: fsub    qword ptr ds:0A2F928h
0x678292: mov     edx, [edi]
0x678294: push    ecx
0x678295: fstp    [esp+38h+var_4]
0x678299: mov     ecx, ebp
0x67829B: fld     [esp+38h+var_4]
0x67829F: fstp    [esp+38h+var_38]
0x6782A2: call    edx
0x6782A4: mov     ebp, [esp+34h+var_20]
0x6782A8: mov     eax, [esi]
0x6782AA: fld     [esp+34h+var_14]
0x6782AE: mov     edx, [eax+1C0h]
0x6782B4: push    ecx
0x6782B5: mov     ecx, esi
0x6782B7: fstp    [esp+38h+var_38]
0x6782BA: call    edx
0x6782BC: jmp     short loc_6782C8
0x6782BE: mov     ecx, [esp+34h+var_1C]
0x6782C2: push    esi
0x6782C3: call    BSSimpleList_PushFront
0x6782C8: mov     ebx, [ebx+4]
0x6782CB: test    ebx, ebx
0x6782CD: mov     edi, [esp+34h+var_10]
0x6782D1: jnz     loc_678200
0x6782D7: mov     ebx, [esp+34h+var_1C]
0x6782DB: test    ebx, ebx
0x6782DD: mov     esi, ebx
0x6782DF: jz      short loc_6782F6
0x6782E1: mov     eax, [esi]
0x6782E3: test    eax, eax
0x6782E5: jz      short loc_6782F6
0x6782E7: push    eax
0x6782E8: mov     ecx, edi
0x6782EA: call    sub_424D00
0x6782EF: mov     esi, [esi+4]
0x6782F2: test    esi, esi
0x6782F4: jnz     short loc_6782E1
0x6782F6: mov     ecx, ebx
0x6782F8: call    BSSimpleList_Clear
0x6782FD: push    ebx
0x6782FE: call    FormHeapFree
0x678303: add     esp, 4
0x678306: mov     ecx, ebp
0x678308: call    BSSimpleList_Clear
0x67830D: push    ebp
0x67830E: call    FormHeapFree
0x678313: mov     eax, [esp+38h+var_C]
0x678317: mov     ecx, [eax+0Ch]
0x67831A: add     esp, 4
0x67831D: call    BSSimpleList_IsEmpty
0x678322: test    al, al
0x678324: jz      short loc_67832D
0x678326: mov     ecx, edi
0x678328: call    sub_420F00
0x67832D: mov     ebp, [esp+34h+var_8]
0x678331: mov     eax, [ebp+78h]
0x678334: test    eax, eax
0x678336: jnz     short loc_67834F
0x678338: mov     eax, [ebp+74h]
0x67833B: test    eax, eax
0x67833D: mov     [ebp+78h], eax
0x678340: jnz     short loc_678352
0x678342: lea     ecx, [ebp+68h]; this
0x678345: call    sub_7616D0
0x67834A: mov     [ebp+78h], eax
0x67834D: jmp     short loc_678352
0x67834F: mov     [ebp+74h], eax
0x678352: mov     eax, [ebp+78h]
0x678355: test    eax, eax
0x678357: jz      short loc_678364
0x678359: mov     ecx, eax
0x67835B: mov     [ebp+74h], eax
0x67835E: mov     edx, [ecx+4]
0x678361: mov     [ebp+78h], edx
0x678364: cmp     dword ptr [ebp+78h], 0
0x678368: jnz     loc_677F14
0x67836E: pop     edi
0x67836F: pop     esi
0x678370: pop     ebx
0x678371: fld     dword ptr ds:0B33E9Ch
0x678377: push    ecx
0x678378: mov     ecx, ebp
0x67837A: fstp    [esp+2Ch+var_2C]; float
0x67837D: call    sub_677500
0x678382: pop     ebp
0x678383: add     esp, 24h
0x678386: retn    8
