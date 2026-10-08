0x405680: push    0FFFFFFFFh; Fog decode: attaches a NiProperty to a node/property-state chain; 0x406D3C uses this to attach active global B333E4 BSFogProperty as property type 1.
0x405682: push    offset SEH_7C77C0
0x405687: mov     eax, large fs:0
0x40568D: push    eax
0x40568E: push    ebx
0x40568F: push    esi
0x405690: push    edi
0x405691: mov     eax, ___security_cookie
0x405696: xor     eax, esp
0x405698: push    eax
0x405699: lea     eax, [esp+1Ch+var_C]
0x40569D: mov     large fs:0, eax
0x4056A3: mov     ebx, ecx
0x4056A5: mov     esi, [esp+1Ch+a2]
0x4056A9: mov     eax, [esi]
0x4056AB: mov     edx, [eax+4Ch]
0x4056AE: mov     ecx, esi
0x4056B0: call    edx; Fog property propagation decode: virtual GetPropertyType on attached property; B333E4/BSFogProperty reports kind 1.
0x4056B2: cmp     eax, 0Ah
0x4056B5: jge     short loc_4056FA; Fog property propagation decode: attach helper admits managed property kinds < 10; active fog kind 1 passes this gate.
0x4056B7: lea     edi, [esi+4]
0x4056BA: push    edi; lpAddend
0x4056BB: mov     [esp+20h+a2], esi
0x4056BF: call    ds:InterlockedIncrement
0x4056C5: lea     eax, [esp+1Ch+a2]
0x4056C9: push    eax; payload
0x4056CA: lea     ecx, [ebx+98h]; self
0x4056D0: mov     [esp+20h+var_4], 0
0x4056D8: call    NiTRefPointerList__AddHead; Fog property propagation decode: inserts B333E4 into the node local property list, later merged into NiPropertyState slot +0x0C.
0x4056DD: push    edi; lpAddend
0x4056DE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x4056E6: call    ds:InterlockedDecrement
0x4056EC: test    eax, eax
0x4056EE: jnz     short loc_4056FA
0x4056F0: mov     edx, [esi]
0x4056F2: mov     eax, [edx]
0x4056F4: push    1
0x4056F6: mov     ecx, esi
0x4056F8: call    eax
0x4056FA: mov     ecx, dword ptr [esp+1Ch+var_C]
0x4056FE: mov     large fs:0, ecx
0x405705: pop     ecx
0x405706: pop     edi
0x405707: pop     esi
0x405708: pop     ebx
0x405709: add     esp, 0Ch
0x40570C: retn    4
0x9A9F20: lea     ecx, [ebp+4]; slot
0x9A9F23: jmp     NiPointerSlot_Release
0x9A9F28: mov     edx, [esp+arg_4]
0x9A9F2C: lea     eax, [edx-0Ch]
0x9A9F2F: mov     ecx, [edx-10h]
0x9A9F32: xor     ecx, eax
0x9A9F34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9A9F39: mov     eax, offset stru_AD6FAC
0x9A9F3E: jmp     ___CxxFrameHandler3
