0x80DC40: push    0FFFFFFFFh
0x80DC42: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x80DC47: mov     eax, large fs:0
0x80DC4D: push    eax
0x80DC4E: push    ecx
0x80DC4F: push    ebp
0x80DC50: push    esi
0x80DC51: push    edi
0x80DC52: mov     eax, ds:0B30AACh
0x80DC57: xor     eax, esp
0x80DC59: push    eax
0x80DC5A: lea     eax, [esp+20h+var_C]
0x80DC5E: mov     large fs:0, eax
0x80DC64: mov     edi, [esp+20h+arg_0]
0x80DC68: push    4
0x80DC6A: mov     ecx, edi
0x80DC6C: call    NiNode_GetNiPropertyByID
0x80DC71: test    eax, eax
0x80DC73: mov     ebp, ds:0A2807Ch
0x80DC79: jz      short loc_80DCC6
0x80DC7B: mov     edx, [eax]
0x80DC7D: mov     ecx, eax
0x80DC7F: mov     eax, [edx+54h]
0x80DC82: call    eax
0x80DC84: xor     ecx, ecx
0x80DC86: cmp     eax, 6
0x80DC89: setz    cl
0x80DC8C: mov     eax, ecx
0x80DC8E: test    eax, eax
0x80DC90: jnz     loc_80DD6B
0x80DC96: push    4
0x80DC98: lea     edx, [esp+24h+arg_0]
0x80DC9C: push    edx
0x80DC9D: mov     ecx, edi
0x80DC9F: call    sub_708560
0x80DCA4: mov     eax, [esp+20h+arg_0]
0x80DCA8: test    eax, eax
0x80DCAA: jz      short loc_80DCC6
0x80DCAC: mov     esi, eax
0x80DCAE: add     eax, 4
0x80DCB1: push    eax; lpAddend
0x80DCB2: call    ebp ; InterlockedDecrement
0x80DCB4: test    eax, eax
0x80DCB6: jnz     short loc_80DCC6
0x80DCB8: test    esi, esi
0x80DCBA: jz      short loc_80DCC6
0x80DCBC: mov     eax, [esi]
0x80DCBE: mov     edx, [eax]
0x80DCC0: push    1
0x80DCC2: mov     ecx, esi
0x80DCC4: call    edx
0x80DCC6: push    170h; Size
0x80DCCB: call    FormHeapAlloc
0x80DCD0: add     esp, 4
0x80DCD3: mov     [esp+20h+var_10], eax
0x80DCD7: test    eax, eax
0x80DCD9: mov     [esp+20h+var_4], 0
0x80DCE1: jz      short loc_80DCEE
0x80DCE3: mov     ecx, eax; this
0x80DCE5: call    ??0HairShaderProperty@@QAE@XZ; HairShaderProperty::HairShaderProperty(void)
0x80DCEA: mov     esi, eax
0x80DCEC: jmp     short loc_80DCF0
0x80DCEE: xor     esi, esi
0x80DCF0: push    esi; a2
0x80DCF1: mov     ecx, edi; this
0x80DCF3: mov     [esp+24h+var_4], 0FFFFFFFFh
0x80DCFB: call    sub_405680
0x80DD00: mov     eax, [esi]
0x80DD02: mov     edx, [eax+58h]
0x80DD05: push    edi
0x80DD06: mov     ecx, esi
0x80DD08: call    edx
0x80DD0A: test    al, al
0x80DD0C: jnz     short loc_80DD59
0x80DD0E: push    esi
0x80DD0F: mov     ecx, edi
0x80DD11: call    sub_4A1220
0x80DD16: mov     esi, [edi+0BCh]
0x80DD1C: test    esi, esi
0x80DD1E: jz      short loc_80DD42
0x80DD20: lea     eax, [esi+4]
0x80DD23: push    eax; lpAddend
0x80DD24: call    ebp ; InterlockedDecrement
0x80DD26: test    eax, eax
0x80DD28: jnz     short loc_80DD38
0x80DD2A: test    esi, esi
0x80DD2C: jz      short loc_80DD38
0x80DD2E: mov     edx, [esi]
0x80DD30: mov     eax, [edx]
0x80DD32: push    1
0x80DD34: mov     ecx, esi
0x80DD36: call    eax
0x80DD38: mov     dword ptr [edi+0BCh], 0
0x80DD42: xor     al, al
0x80DD44: mov     ecx, dword ptr [esp+20h+var_C]
0x80DD48: mov     large fs:0, ecx
0x80DD4F: pop     ecx
0x80DD50: pop     edi
0x80DD51: pop     esi
0x80DD52: pop     ebp
0x80DD53: add     esp, 10h
0x80DD56: retn    4
0x80DD59: mov     edx, [esi]
0x80DD5B: mov     eax, [edx+8Ch]
0x80DD61: push    0
0x80DD63: mov     ecx, esi
0x80DD65: call    eax
0x80DD67: test    eax, eax
0x80DD69: jz      short loc_80DD42
0x80DD6B: mov     al, 1
0x80DD6D: mov     ecx, dword ptr [esp+20h+var_C]
0x80DD71: mov     large fs:0, ecx
0x80DD78: pop     ecx
0x80DD79: pop     edi
0x80DD7A: pop     esi
0x80DD7B: pop     ebp
0x80DD7C: add     esp, 10h
0x80DD7F: retn    4
