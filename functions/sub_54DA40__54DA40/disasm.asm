0x54DA40: push    ebp
0x54DA41: mov     ebp, esp
0x54DA43: and     esp, 0FFFFFF80h
0x54DA46: push    0FFFFFFFFh
0x54DA48: push    offset SEH_54DA40
0x54DA4D: mov     eax, large fs:0
0x54DA53: push    eax
0x54DA54: sub     esp, 0A68h
0x54DA5A: mov     eax, ds:0B30AACh
0x54DA5F: xor     eax, esp
0x54DA61: mov     [esp+0A74h+var_84], eax
0x54DA68: push    ebx
0x54DA69: push    esi
0x54DA6A: push    edi
0x54DA6B: mov     eax, ds:0B30AACh
0x54DA70: xor     eax, esp
0x54DA72: push    eax
0x54DA73: lea     eax, [esp+0A84h+var_C]
0x54DA7A: mov     large fs:0, eax
0x54DA80: mov     eax, [ebp+arg_C]
0x54DA83: mov     edi, ecx
0x54DA85: lea     ecx, [edi+8]
0x54DA88: mov     [esp+0A84h+var_A0C], eax
0x54DA8C: mov     eax, [ecx]
0x54DA8E: xor     ebx, ebx
0x54DA90: cmp     eax, ebx
0x54DA92: mov     [esp+0A84h+var_A10], ecx
0x54DA96: jnz     loc_54DE88
0x54DA9C: mov     eax, [edi+10h]
0x54DA9F: cmp     eax, ebx
0x54DAA1: lea     esi, [edi+0Ch]
0x54DAA4: jz      loc_54DE86
0x54DAAA: mov     edx, [esi+8]
0x54DAAD: sub     edx, eax
0x54DAAF: sar     edx, 4
0x54DAB2: jz      loc_54DE86
0x54DAB8: cmp     [edi+1Ch], ebx
0x54DABB: jz      loc_54DE86
0x54DAC1: cmp     [edi+20h], ebx
0x54DAC4: jz      loc_54DE86
0x54DACA: fld     [ebp+arg_0]
0x54DACD: fld     [ebp+arg_4]
0x54DAD0: fcompp
0x54DAD2: fnstsw  ax
0x54DAD4: test    ah, 41h
0x54DAD7: jnz     loc_54DE86
0x54DADD: lea     ecx, [esp+0A84h+var_A00]; this
0x54DAE4: call    ??0NiDevImageConverter@@QAE@XZ; NiDevImageConverter::NiDevImageConverter(void)
0x54DAE9: mov     [esp+0A84h+var_4], ebx
0x54DAF0: mov     [esp+0A84h+var_A18], ebx
0x54DAF4: lea     eax, [esp+0A84h+var_A08]
0x54DAF8: push    eax
0x54DAF9: mov     ecx, esi
0x54DAFB: mov     byte ptr [esp+0A88h+var_4], 1
0x54DB03: call    sub_54DA10
0x54DB08: mov     ebx, [eax]
0x54DB0A: mov     esi, [eax+4]
0x54DB0D: mov     eax, [edi+20h]
0x54DB10: imul    eax, [edi+1Ch]
0x54DB14: push    70h ; 'p'; Size
0x54DB16: mov     [esp+0A88h+var_A14], eax
0x54DB1A: call    FormHeapAlloc
0x54DB1F: add     esp, 4
0x54DB22: mov     [esp+0A84h+var_A20], eax
0x54DB26: test    eax, eax
0x54DB28: mov     byte ptr [esp+0A84h+var_4], 2
0x54DB30: jz      short loc_54DB50
0x54DB32: mov     ecx, [edi+20h]
0x54DB35: mov     edx, [edi+1Ch]
0x54DB38: push    1
0x54DB3A: push    1
0x54DB3C: push    offset unk_B25E00
0x54DB41: push    ecx
0x54DB42: push    edx
0x54DB43: mov     ecx, eax
0x54DB45: call    NiPixelData__NiPixelData
0x54DB4A: mov     [esp+0A84h+var_A1C], eax
0x54DB4E: jmp     short loc_54DB5C
0x54DB50: mov     [esp+0A84h+var_A1C], 0
0x54DB58: mov     eax, [esp+0A84h+var_A1C]
0x54DB5C: mov     ecx, [eax+5Ch]
0x54DB5F: mov     edi, [ecx]
0x54DB61: mov     ecx, [esp+0A84h+var_A14]
0x54DB65: add     edi, [eax+50h]
0x54DB68: test    ecx, ecx
0x54DB6A: mov     byte ptr [esp+0A84h+var_4], 1
0x54DB72: jbe     loc_54DD90
0x54DB78: mov     [esp+0A84h+var_A14], ecx
0x54DB7C: test    ebx, ebx
0x54DB7E: jnz     short loc_54DB85
0x54DB80: call    __invalid_parameter_noinfo
0x54DB85: cmp     esi, [ebx+8]
0x54DB88: jb      short loc_54DB8F
0x54DB8A: call    __invalid_parameter_noinfo
0x54DB8F: fld     dword ptr [esi]
0x54DB91: fstp    [esp+0A84h+var_A24]
0x54DB95: fld     [esp+0A84h+var_A24]
0x54DB99: fld     [ebp+arg_0]
0x54DB9C: fcom    st(1)
0x54DB9E: fnstsw  ax
0x54DBA0: test    ah, 41h
0x54DBA3: jp      short loc_54DBB7
0x54DBA5: fstp    st
0x54DBA7: fld     [ebp+arg_4]
0x54DBAA: fcom    st(1)
0x54DBAC: fnstsw  ax
0x54DBAE: test    ah, 1
0x54DBB1: jnz     short loc_54DBB7
0x54DBB3: fstp    st
0x54DBB5: jmp     short loc_54DBB9
0x54DBB7: fstp    st(1)
0x54DBB9: fstp    [esp+0A84h+var_A24]
0x54DBBD: push    ecx
0x54DBBE: fld     [esp+0A88h+var_A24]
0x54DBC2: fstp    [esp+0A88h+var_A88]; float
0x54DBC5: call    FloatFloor
0x54DBCA: fld     [ebp+arg_0]
0x54DBCD: add     esp, 4
0x54DBD0: fld     st
0x54DBD2: fnstcw  word ptr [esp+0A84h+var_A24]
0x54DBD6: movzx   eax, word ptr [esp+0A84h+var_A24]
0x54DBDB: fsubp   st(2), st
0x54DBDD: fld     [ebp+arg_8]
0x54DBE0: or      eax, 0C00h
0x54DBE5: mov     [esp+0A84h+var_A20], eax
0x54DBE9: fmulp   st(2), st
0x54DBEB: fldcw   word ptr [esp+0A84h+var_A20]
0x54DBEF: fxch    st(1)
0x54DBF1: fistp   [esp+0A84h+var_A20]
0x54DBF5: mov     dl, byte ptr [esp+0A84h+var_A20]
0x54DBF9: mov     [edi], dl
0x54DBFB: cmp     esi, [ebx+8]
0x54DBFE: fldcw   word ptr [esp+0A84h+var_A24]
0x54DC02: jb      short loc_54DC0E
0x54DC04: fstp    st
0x54DC06: call    __invalid_parameter_noinfo
0x54DC0B: fld     [ebp+arg_0]
0x54DC0E: fld     dword ptr [esi+4]
0x54DC11: fstp    [esp+0A84h+var_A24]
0x54DC15: fld     [esp+0A84h+var_A24]
0x54DC19: fcom    st(1)
0x54DC1B: fnstsw  ax
0x54DC1D: test    ah, 1
0x54DC20: jnz     short loc_54DC34
0x54DC22: fstp    st(1)
0x54DC24: fld     [ebp+arg_4]
0x54DC27: fcom    st(1)
0x54DC29: fnstsw  ax
0x54DC2B: test    ah, 1
0x54DC2E: jz      short loc_54DC34
0x54DC30: fstp    st(1)
0x54DC32: jmp     short loc_54DC36
0x54DC34: fstp    st
0x54DC36: fstp    [esp+0A84h+var_A24]
0x54DC3A: push    ecx
0x54DC3B: fld     [esp+0A88h+var_A24]
0x54DC3F: fstp    [esp+0A88h+var_A88]; float
0x54DC42: call    FloatFloor
0x54DC47: fld     [ebp+arg_0]
0x54DC4A: add     esp, 4
0x54DC4D: fld     st
0x54DC4F: fnstcw  word ptr [esp+0A84h+var_A24]
0x54DC53: movzx   eax, word ptr [esp+0A84h+var_A24]
0x54DC58: fsubp   st(2), st
0x54DC5A: fld     [ebp+arg_8]
0x54DC5D: or      eax, 0C00h
0x54DC62: mov     [esp+0A84h+var_A20], eax
0x54DC66: fmulp   st(2), st
0x54DC68: fldcw   word ptr [esp+0A84h+var_A20]
0x54DC6C: fxch    st(1)
0x54DC6E: fistp   [esp+0A84h+var_A20]
0x54DC72: mov     al, byte ptr [esp+0A84h+var_A20]
0x54DC76: mov     [edi+1], al
0x54DC79: cmp     esi, [ebx+8]
0x54DC7C: fldcw   word ptr [esp+0A84h+var_A24]
0x54DC80: jb      short loc_54DC8C
0x54DC82: fstp    st
0x54DC84: call    __invalid_parameter_noinfo
0x54DC89: fld     [ebp+arg_0]
0x54DC8C: fld     dword ptr [esi+8]
0x54DC8F: fstp    [esp+0A84h+var_A24]
0x54DC93: fld     [esp+0A84h+var_A24]
0x54DC97: fcom    st(1)
0x54DC99: fnstsw  ax
0x54DC9B: test    ah, 1
0x54DC9E: jnz     short loc_54DCB2
0x54DCA0: fstp    st(1)
0x54DCA2: fld     [ebp+arg_4]
0x54DCA5: fcom    st(1)
0x54DCA7: fnstsw  ax
0x54DCA9: test    ah, 1
0x54DCAC: jz      short loc_54DCB2
0x54DCAE: fstp    st(1)
0x54DCB0: jmp     short loc_54DCB4
0x54DCB2: fstp    st
0x54DCB4: fstp    [esp+0A84h+var_A24]
0x54DCB8: push    ecx
0x54DCB9: fld     [esp+0A88h+var_A24]
0x54DCBD: fstp    [esp+0A88h+var_A88]; float
0x54DCC0: call    FloatFloor
0x54DCC5: fld     [ebp+arg_0]
0x54DCC8: add     esp, 4
0x54DCCB: fld     st
0x54DCCD: fnstcw  word ptr [esp+0A84h+var_A24]
0x54DCD1: movzx   eax, word ptr [esp+0A84h+var_A24]
0x54DCD6: fsubp   st(2), st
0x54DCD8: fld     [ebp+arg_8]
0x54DCDB: or      eax, 0C00h
0x54DCE0: mov     [esp+0A84h+var_A20], eax
0x54DCE4: fmulp   st(2), st
0x54DCE6: fldcw   word ptr [esp+0A84h+var_A20]
0x54DCEA: fxch    st(1)
0x54DCEC: fistp   [esp+0A84h+var_A20]
0x54DCF0: mov     cl, byte ptr [esp+0A84h+var_A20]
0x54DCF4: mov     [edi+2], cl
0x54DCF7: cmp     esi, [ebx+8]
0x54DCFA: fldcw   word ptr [esp+0A84h+var_A24]
0x54DCFE: jb      short loc_54DD0A
0x54DD00: fstp    st
0x54DD02: call    __invalid_parameter_noinfo
0x54DD07: fld     [ebp+arg_0]
0x54DD0A: fld     dword ptr [esi+0Ch]
0x54DD0D: fstp    [esp+0A84h+var_A24]
0x54DD11: fld     [esp+0A84h+var_A24]
0x54DD15: fcom    st(1)
0x54DD17: fnstsw  ax
0x54DD19: test    ah, 1
0x54DD1C: jnz     short loc_54DD30
0x54DD1E: fstp    st(1)
0x54DD20: fld     [ebp+arg_4]
0x54DD23: fcom    st(1)
0x54DD25: fnstsw  ax
0x54DD27: test    ah, 1
0x54DD2A: jz      short loc_54DD30
0x54DD2C: fstp    st(1)
0x54DD2E: jmp     short loc_54DD32
0x54DD30: fstp    st
0x54DD32: fstp    [esp+0A84h+var_A24]
0x54DD36: push    ecx
0x54DD37: fld     [esp+0A88h+var_A24]
0x54DD3B: fstp    [esp+0A88h+var_A88]; float
0x54DD3E: call    FloatFloor
0x54DD43: fsub    [ebp+arg_0]
0x54DD46: add     esp, 4
0x54DD49: fnstcw  word ptr [esp+0A84h+var_A24]
0x54DD4D: add     edi, 4
0x54DD50: movzx   eax, word ptr [esp+0A84h+var_A24]
0x54DD55: fmul    [ebp+arg_8]
0x54DD58: or      eax, 0C00h
0x54DD5D: mov     [esp+0A84h+var_A20], eax
0x54DD61: fldcw   word ptr [esp+0A84h+var_A20]
0x54DD65: fistp   [esp+0A84h+var_A20]
0x54DD69: mov     dl, byte ptr [esp+0A84h+var_A20]
0x54DD6D: mov     [edi-1], dl
0x54DD70: cmp     esi, [ebx+8]
0x54DD73: fldcw   word ptr [esp+0A84h+var_A24]
0x54DD77: jb      short loc_54DD7E
0x54DD79: call    __invalid_parameter_noinfo
0x54DD7E: add     esi, 10h
0x54DD81: sub     [esp+0A84h+var_A14], 1
0x54DD86: jnz     loc_54DB7C
0x54DD8C: mov     eax, [esp+0A84h+var_A1C]
0x54DD90: cmp     byte ptr ds:0B11F8Ch, 0
0x54DD97: jz      short loc_54DDD0
0x54DD99: push    0
0x54DD9B: push    eax
0x54DD9C: lea     ecx, [esp+0A8Ch+var_A00]
0x54DDA3: call    sub_71B8D0
0x54DDA8: mov     ecx, [esp+0A84h+var_A1C]
0x54DDAC: mov     esi, eax
0x54DDAE: mov     eax, [ecx]
0x54DDB0: mov     edx, [eax]
0x54DDB2: push    1
0x54DDB4: call    edx
0x54DDB6: cmp     byte ptr ds:0B05244h, 0
0x54DDBD: jz      short loc_54DDC8
0x54DDBF: push    esi
0x54DDC0: call    sub_47F590
0x54DDC5: add     esp, 4
0x54DDC8: push    offset dword_B256D0
0x54DDCD: push    esi
0x54DDCE: jmp     short loc_54DDEC
0x54DDD0: cmp     byte ptr ds:0B05244h, 0
0x54DDD7: jz      short loc_54DDE6
0x54DDD9: push    eax
0x54DDDA: call    sub_47F590
0x54DDDF: mov     eax, [esp+0A88h+var_A1C]
0x54DDE3: add     esp, 4
0x54DDE6: push    offset dword_B256D0; a2
0x54DDEB: push    eax; a1
0x54DDEC: call    NiSourceTexture__LoadTexturePixelData
0x54DDF1: add     esp, 8
0x54DDF4: push    eax; a2
0x54DDF5: lea     ecx, [esp+0A88h+var_A18]; this
0x54DDF9: call    NiSmartPointer_Set??
0x54DDFE: mov     eax, [esp+0A84h+var_A0C]
0x54DE02: cmp     dword ptr [eax+4], 1
0x54DE06: mov     esi, [esp+0A84h+var_A18]
0x54DE0A: jnz     short loc_54DE1E
0x54DE0C: mov     edi, [esp+0A84h+var_A10]
0x54DE10: lea     eax, [esp+0A84h+var_A18]
0x54DE14: push    eax
0x54DE15: mov     ecx, edi
0x54DE17: call    sub_55E2A0
0x54DE1C: jmp     short loc_54DE36
0x54DE1E: push    eax
0x54DE1F: push    esi
0x54DE20: call    sub_480000
0x54DE25: mov     ecx, [esp+0A8Ch+var_A10]; this
0x54DE29: add     esp, 8
0x54DE2C: push    eax; a2
0x54DE2D: call    NiSmartPointer_Set??
0x54DE32: mov     edi, [esp+0A84h+var_A10]
0x54DE36: cmp     dword ptr [edi], 0
0x54DE39: jnz     short loc_54DE47
0x54DE3B: lea     ecx, [esp+0A84h+var_A18]
0x54DE3F: push    ecx
0x54DE40: mov     ecx, edi
0x54DE42: call    sub_55E2A0
0x54DE47: test    esi, esi
0x54DE49: mov     byte ptr [esp+0A84h+var_4], 0
0x54DE51: jz      short loc_54DE6B
0x54DE53: lea     edx, [esi+4]
0x54DE56: push    edx; lpAddend
0x54DE57: call    dword ptr ds:0A2807Ch
0x54DE5D: test    eax, eax
0x54DE5F: jnz     short loc_54DE6B
0x54DE61: mov     eax, [esi]
0x54DE63: mov     edx, [eax]
0x54DE65: push    1
0x54DE67: mov     ecx, esi
0x54DE69: call    edx
0x54DE6B: lea     ecx, [esp+0A84h+var_A00]; this
0x54DE72: mov     [esp+0A84h+var_4], 0FFFFFFFFh
0x54DE7D: call    ??1NiDevImageConverter@@UAE@XZ; NiDevImageConverter::~NiDevImageConverter(void)
0x54DE82: mov     eax, [edi]
0x54DE84: jmp     short loc_54DE88
0x54DE86: mov     eax, [ecx]
0x54DE88: mov     ecx, [esp+0A84h+var_C]
0x54DE8F: mov     large fs:0, ecx
0x54DE96: pop     ecx
0x54DE97: pop     edi
0x54DE98: pop     esi
0x54DE99: pop     ebx
0x54DE9A: mov     ecx, [esp+0A74h+var_84]
0x54DEA1: xor     ecx, esp
0x54DEA3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x54DEA8: mov     esp, ebp
0x54DEAA: pop     ebp
0x54DEAB: retn    10h
