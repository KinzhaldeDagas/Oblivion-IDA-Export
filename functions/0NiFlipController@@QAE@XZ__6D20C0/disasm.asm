0x6D20C0: push    0FFFFFFFFh
0x6D20C2: push    offset ??0NiFlipController@@QAE@XZ_SEH
0x6D20C7: mov     eax, large fs:0
0x6D20CD: push    eax
0x6D20CE: push    ecx
0x6D20CF: push    esi
0x6D20D0: push    edi
0x6D20D1: mov     eax, ds:0B30AACh
0x6D20D6: xor     eax, esp
0x6D20D8: push    eax
0x6D20D9: lea     eax, [esp+1Ch+var_C]
0x6D20DD: mov     large fs:0, eax
0x6D20E3: mov     esi, ecx
0x6D20E5: mov     [esp+1Ch+var_10], esi
0x6D20E9: call    sub_6EC180
0x6D20EE: push    1
0x6D20F0: xor     edi, edi
0x6D20F2: push    1
0x6D20F4: lea     ecx, [esi+40h]
0x6D20F7: mov     [esp+24h+var_4], edi
0x6D20FB: mov     dword ptr [esi], offset ??_7NiFlipController@@6B@; const NiFlipController::`vftable'
0x6D2101: call    sub_523DE0
0x6D2106: mov     [esi+50h], edi
0x6D2109: mov     [esi+54h], edi
0x6D210C: mov     [esi+58h], edi
0x6D210F: mov     eax, esi
0x6D2111: mov     ecx, [esp+1Ch+var_C]
0x6D2115: mov     large fs:0, ecx
0x6D211C: pop     ecx
0x6D211D: pop     edi
0x6D211E: pop     esi
0x6D211F: add     esp, 10h
0x6D2122: retn
0x9C79F0: mov     ecx, [ebp-10h]; this
0x9C79F3: jmp     j_??1NiPoint3InterpController@@UAE@XZ; NiPoint3InterpController::~NiPoint3InterpController(void)
0x9C79F8: mov     edx, [esp+arg_4]
0x9C79FC: lea     eax, [edx-0Ch]
0x9C79FF: mov     ecx, [edx-10h]
0x9C7A02: xor     ecx, eax
0x9C7A04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C7A09: mov     eax, offset stru_AEFDC4
0x9C7A0E: jmp     ___CxxFrameHandler3
