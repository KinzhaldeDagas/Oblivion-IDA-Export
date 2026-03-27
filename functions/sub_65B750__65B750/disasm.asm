0x65B750: push    ebp
0x65B751: mov     ebp, esp
0x65B753: and     esp, 0FFFFFFF0h
0x65B756: push    0FFFFFFFFh
0x65B758: push    offset SEH_65B750
0x65B75D: mov     eax, large fs:0
0x65B763: push    eax
0x65B764: sub     esp, 0D8h
0x65B76A: mov     eax, ds:0B30AACh
0x65B76F: xor     eax, esp
0x65B771: mov     [esp+0E4h+var_14], eax
0x65B778: push    ebx
0x65B779: push    esi
0x65B77A: push    edi
0x65B77B: mov     eax, ds:0B30AACh
0x65B780: xor     eax, esp
0x65B782: push    eax
0x65B783: lea     eax, [esp+0F4h+var_C]
0x65B78A: mov     large fs:0, eax
0x65B790: mov     esi, ecx
0x65B792: cmp     dword ptr [esi+58h], 0
0x65B796: jz      loc_65BA60
0x65B79C: mov     ecx, [esi+58h]
0x65B79F: mov     eax, [ecx]
0x65B7A1: mov     edx, [eax+8]
0x65B7A4: call    edx
0x65B7A6: test    eax, eax
0x65B7A8: jz      short loc_65B7BD
0x65B7AA: mov     ecx, [esi+58h]
0x65B7AD: mov     eax, [ecx]
0x65B7AF: mov     edx, [eax+8]
0x65B7B2: call    edx
0x65B7B4: cmp     eax, 1
0x65B7B7: jnz     loc_65BA60
0x65B7BD: mov     ecx, esi; this
0x65B7BF: call    TESObjectREFR_GetParentCell
0x65B7C4: test    eax, eax
0x65B7C6: jz      short loc_65B7E6
0x65B7C8: mov     ecx, esi; this
0x65B7CA: call    TESObjectREFR_GetParentCell
0x65B7CF: cmp     byte ptr [eax+26h], 6
0x65B7D3: jz      short loc_65B7E6
0x65B7D5: mov     ecx, esi; this
0x65B7D7: call    TESObjectREFR_GetParentCell
0x65B7DC: cmp     byte ptr [eax+26h], 5
0x65B7E0: jnz     loc_65BA60
0x65B7E6: push    0; int
0x65B7E8: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x65B7ED: push    offset ??_R0?AVMobileObject@@@8; struct _s_RTTICompleteObjectLocator *
0x65B7F2: push    0; int
0x65B7F4: push    esi; void *
0x65B7F5: call    OblivionDynamicCast
0x65B7FA: mov     edi, eax
0x65B7FC: add     esp, 14h
0x65B7FF: test    edi, edi
0x65B801: jz      short loc_65B823
0x65B803: mov     ecx, edi; this
0x65B805: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x65B80A: cmp     eax, 2
0x65B80D: jz      short loc_65B81C
0x65B80F: push    0FFFFFFFFh
0x65B811: mov     ecx, edi
0x65B813: call    sub_5F0310
0x65B818: test    al, al
0x65B81A: jz      short loc_65B823
0x65B81C: mov     [esp+0F4h+var_D5], 1
0x65B821: jmp     short loc_65B828
0x65B823: mov     [esp+0F4h+var_D5], 0
0x65B828: mov     ecx, esi; this
0x65B82A: call    MobileObject_GetCharProxy
0x65B82F: mov     ebx, eax
0x65B831: test    ebx, ebx
0x65B833: jnz     loc_65B9C7
0x65B839: push    1
0x65B83B: lea     ecx, [esp+0F8h+var_D0]
0x65B83F: call    sub_890C00
0x65B844: fld     dword ptr [esi+2Ch]
0x65B847: fld     qword ptr ds:0A39088h
0x65B84D: mov     eax, [esi+3Ch]
0x65B850: mov     edx, [esi]
0x65B852: fmul    st(1), st
0x65B854: fxch    st(1)
0x65B856: mov     [esp+0F4h+var_60], eax
0x65B85D: mov     eax, [edx+1F4h]
0x65B863: fstp    [esp+0F4h+var_D0]
0x65B867: mov     ecx, esi
0x65B869: fld     dword ptr [esi+30h]
0x65B86C: mov     [esp+0F4h+var_4], ebx
0x65B873: fmul    st, st(1)
0x65B875: mov     [esp+0F4h+var_58], ebx
0x65B87C: fstp    [esp+0F4h+var_CC]
0x65B880: fmul    dword ptr [esi+34h]
0x65B883: fstp    [esp+0F4h+var_C8]
0x65B887: call    eax
0x65B889: cmp     edi, ebx
0x65B88B: fstp    [esp+0F4h+var_54]
0x65B892: jz      short loc_65B8BF
0x65B894: mov     edx, [esi]
0x65B896: mov     eax, [edx+170h]
0x65B89C: mov     ecx, esi
0x65B89E: call    eax
0x65B8A0: test    eax, eax
0x65B8A2: jz      short loc_65B8BF
0x65B8A4: mov     ecx, edi; this
0x65B8A6: call    Actor_IsCreature
0x65B8AB: test    al, al
0x65B8AD: jz      short loc_65B8BF
0x65B8AF: mov     ecx, esi; this
0x65B8B1: call    TESObjectREFR_GetScale
0x65B8B6: fstp    [esp+0F4h+var_38]
0x65B8BD: jmp     short loc_65B8C7
0x65B8BF: mov     [esp+0F4h+var_4B], 1
0x65B8C7: push    1
0x65B8C9: push    3E0h
0x65B8CE: mov     ecx, offset FormHeap
0x65B8D3: call    j_MemoryHeap_Alloc
0x65B8D8: mov     dl, al
0x65B8DA: and     dl, 0Fh
0x65B8DD: mov     cl, 10h
0x65B8DF: sub     cl, dl
0x65B8E1: movzx   edx, cl
0x65B8E4: add     eax, edx
0x65B8E6: mov     [eax-1], cl
0x65B8E9: mov     [esp+0F4h+a1], eax
0x65B8ED: lea     ecx, [esp+0F4h+var_D0]
0x65B8F1: push    ecx
0x65B8F2: mov     ecx, eax; this
0x65B8F4: mov     byte ptr [esp+0F8h+var_4], 1
0x65B8FC: call    ??0bhkCharacterController@@QAE@XZ; bhkCharacterController::bhkCharacterController(void)
0x65B901: mov     edi, eax
0x65B903: test    edi, edi
0x65B905: push    ecx
0x65B906: mov     eax, esp
0x65B908: mov     byte ptr [esp+0F8h+var_4], 0
0x65B910: mov     ebx, edi
0x65B912: mov     [esp+0F8h+a1], esp
0x65B916: mov     [eax], edi
0x65B918: jz      short loc_65B924
0x65B91A: lea     edx, [edi+4]
0x65B91D: push    edx; lpAddend
0x65B91E: call    dword ptr ds:0A28078h
0x65B924: mov     ecx, [esi+58h]
0x65B927: mov     eax, [ecx]
0x65B929: mov     edx, [eax+190h]
0x65B92F: call    edx
0x65B931: push    esi
0x65B932: push    3E8h
0x65B937: mov     ecx, edi
0x65B939: call    sub_8910F0
0x65B93E: mov     eax, [esi]
0x65B940: mov     edx, [eax+0ECh]
0x65B946: mov     ecx, esi
0x65B948: call    edx
0x65B94A: fstp    [esp+0F4h+a1]
0x65B94E: fld     [esp+0F4h+a1]
0x65B952: fstp    dword ptr [edi+334h]
0x65B958: cmp     byte ptr ds:0B333B8h, 0
0x65B95F: jz      short loc_65B96D
0x65B961: or      dword ptr [edi+1F4h], 100000h
0x65B96B: jmp     short loc_65B977
0x65B96D: and     dword ptr [edi+1F4h], 0FFEFFFFFh
0x65B977: mov     ecx, [esi+58h]
0x65B97A: mov     eax, [ecx]
0x65B97C: mov     edx, [eax+36Ch]
0x65B982: call    edx
0x65B984: test    eax, eax
0x65B986: jz      short loc_65B9B3
0x65B988: mov     eax, [esi]
0x65B98A: fld     dword ptr ds:0A2FAACh
0x65B990: mov     edx, [eax+1ECh]
0x65B996: push    ecx
0x65B997: mov     ecx, esi
0x65B999: fstp    [esp+0F8h+var_F8]
0x65B99C: call    edx
0x65B99E: mov     ecx, esi; this
0x65B9A0: call    MobileObject_GetCharProxy
0x65B9A5: test    eax, eax
0x65B9A7: jz      short loc_65B9B3
0x65B9A9: or      dword ptr [eax+1F4h], 800h
0x65B9B3: lea     ecx, [esp+0F4h+var_D0]
0x65B9B7: mov     [esp+0F4h+var_4], 0FFFFFFFFh
0x65B9C2: call    sub_890F70
0x65B9C7: mov     ecx, [ebx+364h]
0x65B9CD: test    ecx, ecx
0x65B9CF: jz      short loc_65B9DA
0x65B9D1: push    0
0x65B9D3: call    sub_89F6B0
0x65B9D8: jmp     short loc_65B9DC
0x65B9DA: xor     eax, eax
0x65B9DC: mov     edx, [esi+3Ch]
0x65B9DF: cmp     eax, edx
0x65B9E1: mov     [esp+0F4h+a1], edx
0x65B9E5: jz      short loc_65BA52
0x65B9E7: mov     ecx, [ebx+364h]
0x65B9ED: test    ecx, ecx
0x65B9EF: jz      short loc_65B9F9
0x65B9F1: push    0
0x65B9F3: push    edx
0x65B9F4: call    sub_89F650
0x65B9F9: mov     ecx, esi; this
0x65B9FB: call    TESObjectREFR_GetParentCell
0x65BA00: mov     edi, eax
0x65BA02: test    edi, edi
0x65BA04: jz      short loc_65BA38
0x65BA06: mov     ecx, edi; this
0x65BA08: call    TESObjectCELL_IsInterior
0x65BA0D: test    al, al
0x65BA0F: jz      short loc_65BA1B
0x65BA11: lea     ecx, [edi+28h]
0x65BA14: call    sub_424180
0x65BA19: jmp     short loc_65BA20
0x65BA1B: mov     eax, ds:0B35C24h
0x65BA20: test    eax, eax
0x65BA22: jz      short loc_65BA38
0x65BA24: cmp     byte ptr [eax+1Ah], 0
0x65BA28: jz      short loc_65BA38
0x65BA2A: mov     eax, [ebx]
0x65BA2C: mov     edx, [eax+88h]
0x65BA32: push    0
0x65BA34: mov     ecx, ebx
0x65BA36: call    edx
0x65BA38: cmp     [esp+0F4h+var_D5], 0
0x65BA3D: jnz     short loc_65BA52
0x65BA3F: mov     eax, [esp+0F4h+a1]
0x65BA43: push    0; a4
0x65BA45: push    1; a3
0x65BA47: push    6; a2
0x65BA49: push    eax; a1
0x65BA4A: call    sub_88D070
0x65BA4F: add     esp, 10h
0x65BA52: mov     edx, [esi]
0x65BA54: mov     eax, [edx+178h]
0x65BA5A: push    0
0x65BA5C: mov     ecx, esi
0x65BA5E: call    eax
0x65BA60: mov     ecx, [esp+0F4h+var_C]
0x65BA67: mov     large fs:0, ecx
0x65BA6E: pop     ecx
0x65BA6F: pop     edi
0x65BA70: pop     esi
0x65BA71: pop     ebx
0x65BA72: mov     ecx, [esp+0E4h+var_14]
0x65BA79: xor     ecx, esp
0x65BA7B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x65BA80: mov     esp, ebp
0x65BA82: pop     ebp
0x65BA83: retn
