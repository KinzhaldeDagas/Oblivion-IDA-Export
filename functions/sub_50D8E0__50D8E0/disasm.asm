0x50D8E0: push    ebp
0x50D8E1: mov     ebp, esp
0x50D8E3: and     esp, 0FFFFFFC0h
0x50D8E6: sub     esp, 234h
0x50D8EC: mov     eax, ds:0B30AACh
0x50D8F1: xor     eax, esp
0x50D8F3: mov     [esp+234h+var_4], eax
0x50D8FA: push    ebx
0x50D8FB: fldz
0x50D8FD: mov     ebx, [ebp+arg_14]
0x50D900: fstp    [esp+238h+var_214]
0x50D904: mov     edx, [ebp+a4]
0x50D907: mov     ecx, [ebp+arg_4]
0x50D90A: mov     eax, [ebp+a1]
0x50D90D: push    esi
0x50D90E: mov     esi, [ebp+arg_C]
0x50D911: push    edi
0x50D912: mov     edi, [ebp+arg_10]
0x50D915: mov     [esp+240h+l], ebx
0x50D919: mov     ebx, [ebp+arg_1C]
0x50D91C: mov     [esp+240h+a3], ebx
0x50D920: lea     ebx, [esp+240h+var_214]
0x50D924: push    ebx
0x50D925: lea     ebx, [esp+244h+Str1]
0x50D929: push    ebx; UInt16
0x50D92A: mov     ebx, [esp+248h+l]
0x50D92E: push    ebx; l
0x50D92F: push    edi; a6
0x50D930: push    esi; a5
0x50D931: push    edx; a4
0x50D932: mov     edx, [esp+258h+a3]
0x50D936: push    edx; a3
0x50D937: push    ecx; a2
0x50D938: push    eax; a1
0x50D939: call    Script_ExtractArgs
0x50D93E: add     esp, 24h
0x50D941: test    al, al
0x50D943: jnz     short loc_50D95A
0x50D945: pop     edi
0x50D946: pop     esi
0x50D947: pop     ebx
0x50D948: mov     ecx, [esp+234h+var_4]
0x50D94F: xor     ecx, esp
0x50D951: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50D956: mov     esp, ebp
0x50D958: pop     ebp
0x50D959: retn
0x50D95A: lea     eax, [esp+240h+Str1]
0x50D95E: push    offset aVelocity; "velocity"
0x50D963: push    eax; Str1
0x50D964: call    __strcmp
0x50D969: add     esp, 8
0x50D96C: test    eax, eax
0x50D96E: mov     bl, 1
0x50D970: jnz     loc_50D9FD
0x50D976: fldz
0x50D978: fld     [esp+240h+var_214]
0x50D97C: fcom    st(1)
0x50D97E: fnstsw  ax
0x50D980: fstp    st(1)
0x50D982: test    bl, ah
0x50D984: jnz     loc_50E237
0x50D98A: fcom    qword ptr ds:0A309F0h
0x50D990: fnstsw  ax
0x50D992: test    ah, 41h
0x50D995: jp      loc_50E237
0x50D99B: mov     ecx, ds:0B45FE0h; this
0x50D9A1: test    ecx, ecx
0x50D9A3: jz      loc_50E237
0x50D9A9: fld     dword ptr ds:0B45FC4h
0x50D9AF: fld     st(1)
0x50D9B1: fucompp
0x50D9B3: fnstsw  ax
0x50D9B5: test    ah, 44h
0x50D9B8: jnp     loc_50E237
0x50D9BE: fstp    dword ptr ds:0B45FC4h
0x50D9C4: call    sub_7E1710
0x50D9C9: fld     [esp+240h+var_214]
0x50D9CD: sub     esp, 8
0x50D9D0: fstp    [esp+248h+var_248]
0x50D9D3: push    offset aSetWaterVeloci; "set water velocity to %f"
0x50D9D8: call    Interface_ConsolePrint
0x50D9DD: add     esp, 0Ch
0x50D9E0: mov     ds:0B3522Bh, bl
0x50D9E6: mov     al, bl
0x50D9E8: pop     edi
0x50D9E9: pop     esi
0x50D9EA: pop     ebx
0x50D9EB: mov     ecx, [esp+234h+var_4]
0x50D9F2: xor     ecx, esp
0x50D9F4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50D9F9: mov     esp, ebp
0x50D9FB: pop     ebp
0x50D9FC: retn
0x50D9FD: lea     ecx, [esp+240h+Str1]
0x50DA01: push    offset aDirection; "direction"
0x50DA06: push    ecx; Str1
0x50DA07: call    __strcmp
0x50DA0C: add     esp, 8
0x50DA0F: test    eax, eax
0x50DA11: jnz     loc_50DAA1
0x50DA17: fldz
0x50DA19: fld     [esp+240h+var_214]
0x50DA1D: fcom    st(1)
0x50DA1F: fnstsw  ax
0x50DA21: fstp    st(1)
0x50DA23: test    ah, 1
0x50DA26: jnz     loc_50E237
0x50DA2C: fld     dword ptr ds:0A4D020h
0x50DA32: fcomp   st(1)
0x50DA34: fnstsw  ax
0x50DA36: test    ah, 1
0x50DA39: jnz     loc_50E237
0x50DA3F: mov     ecx, ds:0B45FE0h; this
0x50DA45: test    ecx, ecx
0x50DA47: jz      loc_50E237
0x50DA4D: fld     dword ptr ds:0B45FC0h
0x50DA53: fld     st(1)
0x50DA55: fucompp
0x50DA57: fnstsw  ax
0x50DA59: test    ah, 44h
0x50DA5C: jnp     loc_50E237
0x50DA62: fstp    dword ptr ds:0B45FC0h
0x50DA68: call    sub_7E1710
0x50DA6D: fld     [esp+240h+var_214]
0x50DA71: call    Double_To_SInt32
0x50DA76: push    eax
0x50DA77: push    offset aSetWaterDirect; "set water direction to %d"
0x50DA7C: call    Interface_ConsolePrint
0x50DA81: add     esp, 8
0x50DA84: mov     ds:0B3522Bh, bl
0x50DA8A: mov     al, bl
0x50DA8C: pop     edi
0x50DA8D: pop     esi
0x50DA8E: pop     ebx
0x50DA8F: mov     ecx, [esp+234h+var_4]
0x50DA96: xor     ecx, esp
0x50DA98: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DA9D: mov     esp, ebp
0x50DA9F: pop     ebp
0x50DAA0: retn
0x50DAA1: lea     edx, [esp+240h+Str1]
0x50DAA5: push    offset aAmplitude; "amplitude"
0x50DAAA: push    edx; Str1
0x50DAAB: call    __strcmp
0x50DAB0: add     esp, 8
0x50DAB3: test    eax, eax
0x50DAB5: jnz     loc_50DB43
0x50DABB: fldz
0x50DABD: fld     [esp+240h+var_214]
0x50DAC1: fcom    st(1)
0x50DAC3: fnstsw  ax
0x50DAC5: fstp    st(1)
0x50DAC7: test    ah, 1
0x50DACA: jnz     loc_50E237
0x50DAD0: fcom    qword ptr ds:0A2FC70h
0x50DAD6: fnstsw  ax
0x50DAD8: test    ah, 41h
0x50DADB: jp      loc_50E237
0x50DAE1: mov     ecx, ds:0B45FE0h; this
0x50DAE7: test    ecx, ecx
0x50DAE9: jz      loc_50E237
0x50DAEF: fld     dword ptr ds:0B45FD8h
0x50DAF5: fld     st(1)
0x50DAF7: fucompp
0x50DAF9: fnstsw  ax
0x50DAFB: test    ah, 44h
0x50DAFE: jnp     loc_50E237
0x50DB04: fstp    dword ptr ds:0B45FD8h
0x50DB0A: call    sub_7E1710
0x50DB0F: fld     [esp+240h+var_214]
0x50DB13: sub     esp, 8
0x50DB16: fstp    [esp+248h+var_248]
0x50DB19: push    offset aSetWaterAmplit; "set water amplitude to %f"
0x50DB1E: call    Interface_ConsolePrint
0x50DB23: add     esp, 0Ch
0x50DB26: mov     ds:0B3522Bh, bl
0x50DB2C: mov     al, bl
0x50DB2E: pop     edi
0x50DB2F: pop     esi
0x50DB30: pop     ebx
0x50DB31: mov     ecx, [esp+234h+var_4]
0x50DB38: xor     ecx, esp
0x50DB3A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DB3F: mov     esp, ebp
0x50DB41: pop     ebp
0x50DB42: retn
0x50DB43: lea     eax, [esp+240h+Str1]
0x50DB47: push    offset aFrequency; "frequency"
0x50DB4C: push    eax; Str1
0x50DB4D: call    __strcmp
0x50DB52: add     esp, 8
0x50DB55: test    eax, eax
0x50DB57: jnz     loc_50DBE7
0x50DB5D: fldz
0x50DB5F: fld     [esp+240h+var_214]
0x50DB63: fcom    st(1)
0x50DB65: fnstsw  ax
0x50DB67: fstp    st(1)
0x50DB69: test    ah, 1
0x50DB6C: jnz     loc_50E237
0x50DB72: fld     dword ptr ds:0A31C80h
0x50DB78: fcomp   st(1)
0x50DB7A: fnstsw  ax
0x50DB7C: test    ah, 1
0x50DB7F: jnz     loc_50E237
0x50DB85: mov     ecx, ds:0B45FE0h; this
0x50DB8B: test    ecx, ecx
0x50DB8D: jz      loc_50E237
0x50DB93: fld     dword ptr ds:0B45FD4h
0x50DB99: fld     st(1)
0x50DB9B: fucompp
0x50DB9D: fnstsw  ax
0x50DB9F: test    ah, 44h
0x50DBA2: jnp     loc_50E237
0x50DBA8: fstp    dword ptr ds:0B45FD4h
0x50DBAE: call    sub_7E1710
0x50DBB3: fld     [esp+240h+var_214]
0x50DBB7: sub     esp, 8
0x50DBBA: fstp    [esp+248h+var_248]
0x50DBBD: push    offset aSetWaterFreque; "set water frequency to %f"
0x50DBC2: call    Interface_ConsolePrint
0x50DBC7: add     esp, 0Ch
0x50DBCA: mov     ds:0B3522Bh, bl
0x50DBD0: mov     al, bl
0x50DBD2: pop     edi
0x50DBD3: pop     esi
0x50DBD4: pop     ebx
0x50DBD5: mov     ecx, [esp+234h+var_4]
0x50DBDC: xor     ecx, esp
0x50DBDE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DBE3: mov     esp, ebp
0x50DBE5: pop     ebp
0x50DBE6: retn
0x50DBE7: lea     ecx, [esp+240h+Str1]
0x50DBEB: push    offset aReflectivity; "reflectivity"
0x50DBF0: push    ecx; Str1
0x50DBF1: call    __strcmp
0x50DBF6: add     esp, 8
0x50DBF9: test    eax, eax
0x50DBFB: jnz     short loc_50DC57
0x50DBFD: fldz
0x50DBFF: fld     [esp+240h+var_214]
0x50DC03: fcom    st(1)
0x50DC05: fnstsw  ax
0x50DC07: fstp    st(1)
0x50DC09: test    ah, 1
0x50DC0C: jnz     loc_50E237
0x50DC12: fld1
0x50DC14: fcomp   st(1)
0x50DC16: fnstsw  ax
0x50DC18: test    ah, 1
0x50DC1B: jnz     loc_50E237
0x50DC21: sub     esp, 8
0x50DC24: fst     dword ptr ds:0B45E48h
0x50DC2A: fstp    [esp+248h+var_248]
0x50DC2D: push    offset aSetWaterReflec; "set water reflectivity amount to %f"
0x50DC32: call    Interface_ConsolePrint
0x50DC37: add     esp, 0Ch
0x50DC3A: mov     ds:0B3522Bh, bl
0x50DC40: mov     al, bl
0x50DC42: pop     edi
0x50DC43: pop     esi
0x50DC44: pop     ebx
0x50DC45: mov     ecx, [esp+234h+var_4]
0x50DC4C: xor     ecx, esp
0x50DC4E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DC53: mov     esp, ebp
0x50DC55: pop     ebp
0x50DC56: retn
0x50DC57: lea     edx, [esp+240h+Str1]
0x50DC5B: push    offset aFresnel; "fresnel"
0x50DC60: push    edx; Str1
0x50DC61: call    __strcmp
0x50DC66: add     esp, 8
0x50DC69: test    eax, eax
0x50DC6B: jnz     short loc_50DCC7
0x50DC6D: fldz
0x50DC6F: fld     [esp+240h+var_214]
0x50DC73: fcom    st(1)
0x50DC75: fnstsw  ax
0x50DC77: fstp    st(1)
0x50DC79: test    ah, 1
0x50DC7C: jnz     loc_50E237
0x50DC82: fld1
0x50DC84: fcomp   st(1)
0x50DC86: fnstsw  ax
0x50DC88: test    ah, 1
0x50DC8B: jnz     loc_50E237
0x50DC91: sub     esp, 8
0x50DC94: fst     dword ptr ds:0B45DC4h
0x50DC9A: fstp    [esp+248h+var_248]
0x50DC9D: push    offset aSetFresnelTerm; "set fresnel term to %f"
0x50DCA2: call    Interface_ConsolePrint
0x50DCA7: add     esp, 0Ch
0x50DCAA: mov     ds:0B3522Bh, bl
0x50DCB0: mov     al, bl
0x50DCB2: pop     edi
0x50DCB3: pop     esi
0x50DCB4: pop     ebx
0x50DCB5: mov     ecx, [esp+234h+var_4]
0x50DCBC: xor     ecx, esp
0x50DCBE: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DCC3: mov     esp, ebp
0x50DCC5: pop     ebp
0x50DCC6: retn
0x50DCC7: lea     eax, [esp+240h+Str1]
0x50DCCB: push    offset aOpacity; "opacity"
0x50DCD0: push    eax; Str1
0x50DCD1: call    __strcmp
0x50DCD6: add     esp, 8
0x50DCD9: test    eax, eax
0x50DCDB: jnz     short loc_50DD3D
0x50DCDD: fldz
0x50DCDF: fld     [esp+240h+var_214]
0x50DCE3: fcom    st(1)
0x50DCE5: fnstsw  ax
0x50DCE7: fstp    st(1)
0x50DCE9: test    ah, 1
0x50DCEC: jnz     loc_50E237
0x50DCF2: fld     qword ptr ds:0A309F0h
0x50DCF8: fcom    st(1)
0x50DCFA: fnstsw  ax
0x50DCFC: test    ah, 1
0x50DCFF: jnz     loc_50E235
0x50DD05: fdivr   st, st(1)
0x50DD07: fstp    dword ptr ds:0B45E4Ch
0x50DD0D: call    Double_To_SInt32
0x50DD12: push    eax
0x50DD13: push    offset aSetWaterOpacit; "set water opacity to %d"
0x50DD18: call    Interface_ConsolePrint
0x50DD1D: add     esp, 8
0x50DD20: mov     ds:0B3522Bh, bl
0x50DD26: mov     al, bl
0x50DD28: pop     edi
0x50DD29: pop     esi
0x50DD2A: pop     ebx
0x50DD2B: mov     ecx, [esp+234h+var_4]
0x50DD32: xor     ecx, esp
0x50DD34: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DD39: mov     esp, ebp
0x50DD3B: pop     ebp
0x50DD3C: retn
0x50DD3D: lea     ecx, [esp+240h+Str1]
0x50DD41: push    offset aBlend; "blend"
0x50DD46: push    ecx; Str1
0x50DD47: call    __strcmp
0x50DD4C: add     esp, 8
0x50DD4F: test    eax, eax
0x50DD51: jnz     short loc_50DDAF
0x50DD53: fldz
0x50DD55: fld     [esp+240h+var_214]
0x50DD59: fcom    st(1)
0x50DD5B: fnstsw  ax
0x50DD5D: fstp    st(1)
0x50DD5F: test    ah, 1
0x50DD62: jnz     short loc_50DD7F
0x50DD64: fld     qword ptr ds:0A309F0h
0x50DD6A: fcom    st(1)
0x50DD6C: fnstsw  ax
0x50DD6E: test    ah, 1
0x50DD71: jnz     short loc_50DD7D
0x50DD73: fdivr   st, st(1)
0x50DD75: fstp    dword ptr ds:0B45E50h
0x50DD7B: jmp     short loc_50DD7F
0x50DD7D: fstp    st
0x50DD7F: call    Double_To_SInt32
0x50DD84: push    eax
0x50DD85: push    offset aSetDetailTextu; "set detail texture blend to %d"
0x50DD8A: call    Interface_ConsolePrint
0x50DD8F: add     esp, 8
0x50DD92: mov     ds:0B3522Bh, bl
0x50DD98: mov     al, bl
0x50DD9A: pop     edi
0x50DD9B: pop     esi
0x50DD9C: pop     ebx
0x50DD9D: mov     ecx, [esp+234h+var_4]
0x50DDA4: xor     ecx, esp
0x50DDA6: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DDAB: mov     esp, ebp
0x50DDAD: pop     ebp
0x50DDAE: retn
0x50DDAF: lea     edx, [esp+240h+Str1]
0x50DDB3: push    offset aScrollx; "scrollx"
0x50DDB8: push    edx; Str1
0x50DDB9: call    __strcmp
0x50DDBE: add     esp, 8
0x50DDC1: test    eax, eax
0x50DDC3: jnz     short loc_50DE1F
0x50DDC5: fldz
0x50DDC7: fld     [esp+240h+var_214]
0x50DDCB: fcom    st(1)
0x50DDCD: fnstsw  ax
0x50DDCF: fstp    st(1)
0x50DDD1: test    ah, 1
0x50DDD4: jnz     loc_50E237
0x50DDDA: fld1
0x50DDDC: fcomp   st(1)
0x50DDDE: fnstsw  ax
0x50DDE0: test    ah, 1
0x50DDE3: jnz     loc_50E237
0x50DDE9: sub     esp, 8
0x50DDEC: fst     dword ptr ds:0B45E54h
0x50DDF2: fstp    [esp+248h+var_248]
0x50DDF5: push    offset aSetScrollXSpee; "set scroll X speed to %f"
0x50DDFA: call    Interface_ConsolePrint
0x50DDFF: add     esp, 0Ch
0x50DE02: mov     ds:0B3522Bh, bl
0x50DE08: mov     al, bl
0x50DE0A: pop     edi
0x50DE0B: pop     esi
0x50DE0C: pop     ebx
0x50DE0D: mov     ecx, [esp+234h+var_4]
0x50DE14: xor     ecx, esp
0x50DE16: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DE1B: mov     esp, ebp
0x50DE1D: pop     ebp
0x50DE1E: retn
0x50DE1F: lea     eax, [esp+240h+Str1]
0x50DE23: push    offset aScrolly; "scrolly"
0x50DE28: push    eax; Str1
0x50DE29: call    __strcmp
0x50DE2E: add     esp, 8
0x50DE31: test    eax, eax
0x50DE33: jnz     short loc_50DE8F
0x50DE35: fldz
0x50DE37: fld     [esp+240h+var_214]
0x50DE3B: fcom    st(1)
0x50DE3D: fnstsw  ax
0x50DE3F: fstp    st(1)
0x50DE41: test    ah, 1
0x50DE44: jnz     loc_50E237
0x50DE4A: fld1
0x50DE4C: fcomp   st(1)
0x50DE4E: fnstsw  ax
0x50DE50: test    ah, 1
0x50DE53: jnz     loc_50E237
0x50DE59: sub     esp, 8
0x50DE5C: fst     dword ptr ds:0B45E58h
0x50DE62: fstp    [esp+248h+var_248]
0x50DE65: push    offset aSetScrollYSpee; "set scroll Y speed to %f"
0x50DE6A: call    Interface_ConsolePrint
0x50DE6F: add     esp, 0Ch
0x50DE72: mov     ds:0B3522Bh, bl
0x50DE78: mov     al, bl
0x50DE7A: pop     edi
0x50DE7B: pop     esi
0x50DE7C: pop     ebx
0x50DE7D: mov     ecx, [esp+234h+var_4]
0x50DE84: xor     ecx, esp
0x50DE86: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DE8B: mov     esp, ebp
0x50DE8D: pop     ebp
0x50DE8E: retn
0x50DE8F: lea     ecx, [esp+240h+Str1]
0x50DE93: push    offset aHelp; "help"
0x50DE98: push    ecx; Str1
0x50DE99: call    __strcmp
0x50DE9E: add     esp, 8
0x50DEA1: test    eax, eax
0x50DEA3: jnz     short loc_50DF23
0x50DEA5: push    offset aVelocity0_0100; "velocity ( 0.0 - 100.0 )"
0x50DEAA: call    Interface_ConsolePrint
0x50DEAF: push    offset aDirection0360; "direction ( 0 - 360 )"
0x50DEB4: call    Interface_ConsolePrint
0x50DEB9: push    offset aAmplitude0_010; "amplitude ( 0.0 - 1000.0 )"
0x50DEBE: call    Interface_ConsolePrint
0x50DEC3: push    offset aFrequency0_010; "frequency ( 0.0 - 10.0 )"
0x50DEC8: call    Interface_ConsolePrint
0x50DECD: push    offset aReflectivity0_; "reflectivity ( 0.0 - 1.0 )"
0x50DED2: call    Interface_ConsolePrint
0x50DED7: push    offset aFresnel0_01_0; "fresnel ( 0.0 - 1.0 )"
0x50DEDC: call    Interface_ConsolePrint
0x50DEE1: push    offset aOpacity0100; "opacity ( 0 - 100 )"
0x50DEE6: call    Interface_ConsolePrint
0x50DEEB: push    offset aBlend0100; "blend ( 0 - 100 )"
0x50DEF0: call    Interface_ConsolePrint
0x50DEF5: push    offset aScrollx0_01_0; "scrollx ( 0.0 - 1.0 )"
0x50DEFA: call    Interface_ConsolePrint
0x50DEFF: push    offset aScrolly0_01_0; "scrolly ( 0.0 - 1.0 )"
0x50DF04: call    Interface_ConsolePrint
0x50DF09: add     esp, 28h
0x50DF0C: mov     al, bl
0x50DF0E: pop     edi
0x50DF0F: pop     esi
0x50DF10: pop     ebx
0x50DF11: mov     ecx, [esp+234h+var_4]
0x50DF18: xor     ecx, esp
0x50DF1A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DF1F: mov     esp, ebp
0x50DF21: pop     ebp
0x50DF22: retn
0x50DF23: lea     edx, [esp+240h+Str1]
0x50DF27: push    offset aOff_0; Str2
0x50DF2C: push    edx; Str1
0x50DF2D: call    __strcmp
0x50DF32: add     esp, 8
0x50DF35: test    eax, eax
0x50DF37: jnz     short loc_50DF55
0x50DF39: mov     ds:0B3522Bh, al
0x50DF3E: mov     al, bl
0x50DF40: pop     edi
0x50DF41: pop     esi
0x50DF42: pop     ebx
0x50DF43: mov     ecx, [esp+234h+var_4]
0x50DF4A: xor     ecx, esp
0x50DF4C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DF51: mov     esp, ebp
0x50DF53: pop     ebp
0x50DF54: retn
0x50DF55: lea     eax, [esp+240h+Str1]
0x50DF59: push    offset aDisplaceforce; "displaceforce"
0x50DF5E: push    eax; Str1
0x50DF5F: call    __strcmp
0x50DF64: add     esp, 8
0x50DF67: test    eax, eax
0x50DF69: jnz     short loc_50DFB2
0x50DF6B: fldz
0x50DF6D: fld     [esp+240h+var_214]
0x50DF71: fcom    st(1)
0x50DF73: fnstsw  ax
0x50DF75: fstp    st(1)
0x50DF77: test    ah, 1
0x50DF7A: jnz     loc_50E237
0x50DF80: fld1
0x50DF82: fcomp   st(1)
0x50DF84: fnstsw  ax
0x50DF86: test    ah, 1
0x50DF89: jnz     loc_50E237
0x50DF8F: fstp    dword ptr ds:0B45F68h
0x50DF95: mov     ds:0B3522Bh, bl
0x50DF9B: mov     al, bl
0x50DF9D: pop     edi
0x50DF9E: pop     esi
0x50DF9F: pop     ebx
0x50DFA0: mov     ecx, [esp+234h+var_4]
0x50DFA7: xor     ecx, esp
0x50DFA9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50DFAE: mov     esp, ebp
0x50DFB0: pop     ebp
0x50DFB1: retn
0x50DFB2: lea     ecx, [esp+240h+Str1]
0x50DFB6: push    offset aDisplaceveloci; "displacevelocity"
0x50DFBB: push    ecx; Str1
0x50DFBC: call    __strcmp
0x50DFC1: add     esp, 8
0x50DFC4: test    eax, eax
0x50DFC6: jnz     short loc_50E00F
0x50DFC8: fldz
0x50DFCA: fld     [esp+240h+var_214]
0x50DFCE: fcom    st(1)
0x50DFD0: fnstsw  ax
0x50DFD2: fstp    st(1)
0x50DFD4: test    ah, 1
0x50DFD7: jnz     loc_50E237
0x50DFDD: fld1
0x50DFDF: fcomp   st(1)
0x50DFE1: fnstsw  ax
0x50DFE3: test    ah, 1
0x50DFE6: jnz     loc_50E237
0x50DFEC: fstp    dword ptr ds:0B45F6Ch
0x50DFF2: mov     ds:0B3522Bh, bl
0x50DFF8: mov     al, bl
0x50DFFA: pop     edi
0x50DFFB: pop     esi
0x50DFFC: pop     ebx
0x50DFFD: mov     ecx, [esp+234h+var_4]
0x50E004: xor     ecx, esp
0x50E006: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E00B: mov     esp, ebp
0x50E00D: pop     ebp
0x50E00E: retn
0x50E00F: lea     edx, [esp+240h+Str1]
0x50E013: push    offset aDisplacefallof; "displacefalloff"
0x50E018: push    edx; Str1
0x50E019: call    __strcmp
0x50E01E: add     esp, 8
0x50E021: test    eax, eax
0x50E023: jnz     short loc_50E06C
0x50E025: fldz
0x50E027: fld     [esp+240h+var_214]
0x50E02B: fcom    st(1)
0x50E02D: fnstsw  ax
0x50E02F: fstp    st(1)
0x50E031: test    ah, 1
0x50E034: jnz     loc_50E237
0x50E03A: fld1
0x50E03C: fcomp   st(1)
0x50E03E: fnstsw  ax
0x50E040: test    ah, 1
0x50E043: jnz     loc_50E237
0x50E049: fstp    dword ptr ds:0B45F70h
0x50E04F: mov     ds:0B3522Bh, bl
0x50E055: mov     al, bl
0x50E057: pop     edi
0x50E058: pop     esi
0x50E059: pop     ebx
0x50E05A: mov     ecx, [esp+234h+var_4]
0x50E061: xor     ecx, esp
0x50E063: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E068: mov     esp, ebp
0x50E06A: pop     ebp
0x50E06B: retn
0x50E06C: lea     eax, [esp+240h+Str1]
0x50E070: push    offset aDisplacedampen; "displacedampener"
0x50E075: push    eax; Str1
0x50E076: call    __strcmp
0x50E07B: add     esp, 8
0x50E07E: test    eax, eax
0x50E080: jnz     short loc_50E0CD
0x50E082: fldz
0x50E084: fld     [esp+240h+var_214]
0x50E088: fcom    st(1)
0x50E08A: fnstsw  ax
0x50E08C: fstp    st(1)
0x50E08E: test    ah, 1
0x50E091: jnz     loc_50E237
0x50E097: fld     dword ptr ds:0A417B4h
0x50E09D: fcomp   st(1)
0x50E09F: fnstsw  ax
0x50E0A1: test    ah, 1
0x50E0A4: jnz     loc_50E237
0x50E0AA: fstp    dword ptr ds:0B45F40h
0x50E0B0: mov     ds:0B3522Bh, bl
0x50E0B6: mov     al, bl
0x50E0B8: pop     edi
0x50E0B9: pop     esi
0x50E0BA: pop     ebx
0x50E0BB: mov     ecx, [esp+234h+var_4]
0x50E0C2: xor     ecx, esp
0x50E0C4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E0C9: mov     esp, ebp
0x50E0CB: pop     ebp
0x50E0CC: retn
0x50E0CD: lea     ecx, [esp+240h+Str1]
0x50E0D1: push    offset aRainforce; "rainforce"
0x50E0D6: push    ecx; Str1
0x50E0D7: call    __strcmp
0x50E0DC: add     esp, 8
0x50E0DF: test    eax, eax
0x50E0E1: jnz     short loc_50E12A
0x50E0E3: fldz
0x50E0E5: fld     [esp+240h+var_214]
0x50E0E9: fcom    st(1)
0x50E0EB: fnstsw  ax
0x50E0ED: fstp    st(1)
0x50E0EF: test    ah, 1
0x50E0F2: jnz     loc_50E237
0x50E0F8: fld1
0x50E0FA: fcomp   st(1)
0x50E0FC: fnstsw  ax
0x50E0FE: test    ah, 1
0x50E101: jnz     loc_50E237
0x50E107: fstp    dword ptr ds:0B45F58h
0x50E10D: mov     ds:0B3522Bh, bl
0x50E113: mov     al, bl
0x50E115: pop     edi
0x50E116: pop     esi
0x50E117: pop     ebx
0x50E118: mov     ecx, [esp+234h+var_4]
0x50E11F: xor     ecx, esp
0x50E121: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E126: mov     esp, ebp
0x50E128: pop     ebp
0x50E129: retn
0x50E12A: lea     edx, [esp+240h+Str1]
0x50E12E: push    offset aRainvelocity; "rainvelocity"
0x50E133: push    edx; Str1
0x50E134: call    __strcmp
0x50E139: add     esp, 8
0x50E13C: test    eax, eax
0x50E13E: jnz     short loc_50E187
0x50E140: fldz
0x50E142: fld     [esp+240h+var_214]
0x50E146: fcom    st(1)
0x50E148: fnstsw  ax
0x50E14A: fstp    st(1)
0x50E14C: test    ah, 1
0x50E14F: jnz     loc_50E237
0x50E155: fld1
0x50E157: fcomp   st(1)
0x50E159: fnstsw  ax
0x50E15B: test    ah, 1
0x50E15E: jnz     loc_50E237
0x50E164: fstp    dword ptr ds:0B45F5Ch
0x50E16A: mov     ds:0B3522Bh, bl
0x50E170: mov     al, bl
0x50E172: pop     edi
0x50E173: pop     esi
0x50E174: pop     ebx
0x50E175: mov     ecx, [esp+234h+var_4]
0x50E17C: xor     ecx, esp
0x50E17E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E183: mov     esp, ebp
0x50E185: pop     ebp
0x50E186: retn
0x50E187: lea     eax, [esp+240h+Str1]
0x50E18B: push    offset aRainfalloff; "rainfalloff"
0x50E190: push    eax; Str1
0x50E191: call    __strcmp
0x50E196: add     esp, 8
0x50E199: test    eax, eax
0x50E19B: jnz     short loc_50E1E0
0x50E19D: fldz
0x50E19F: fld     [esp+240h+var_214]
0x50E1A3: fcom    st(1)
0x50E1A5: fnstsw  ax
0x50E1A7: fstp    st(1)
0x50E1A9: test    ah, 1
0x50E1AC: jnz     loc_50E237
0x50E1B2: fld1
0x50E1B4: fcomp   st(1)
0x50E1B6: fnstsw  ax
0x50E1B8: test    ah, 1
0x50E1BB: jnz     short loc_50E237
0x50E1BD: fstp    dword ptr ds:0B45F60h
0x50E1C3: mov     ds:0B3522Bh, bl
0x50E1C9: mov     al, bl
0x50E1CB: pop     edi
0x50E1CC: pop     esi
0x50E1CD: pop     ebx
0x50E1CE: mov     ecx, [esp+234h+var_4]
0x50E1D5: xor     ecx, esp
0x50E1D7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E1DC: mov     esp, ebp
0x50E1DE: pop     ebp
0x50E1DF: retn
0x50E1E0: lea     ecx, [esp+240h+Str1]
0x50E1E4: push    offset aRainsize; "rainsize"
0x50E1E9: push    ecx; Str1
0x50E1EA: call    __strcmp
0x50E1EF: add     esp, 8
0x50E1F2: test    eax, eax
0x50E1F4: jnz     short loc_50E239
0x50E1F6: fldz
0x50E1F8: fld     [esp+240h+var_214]
0x50E1FC: fcom    st(1)
0x50E1FE: fnstsw  ax
0x50E200: fstp    st(1)
0x50E202: test    ah, 1
0x50E205: jnz     short loc_50E237
0x50E207: fld1
0x50E209: fcomp   st(1)
0x50E20B: fnstsw  ax
0x50E20D: test    ah, 1
0x50E210: jnz     short loc_50E237
0x50E212: fstp    dword ptr ds:0B45F64h
0x50E218: mov     ds:0B3522Bh, bl
0x50E21E: mov     al, bl
0x50E220: pop     edi
0x50E221: pop     esi
0x50E222: pop     ebx
0x50E223: mov     ecx, [esp+234h+var_4]
0x50E22A: xor     ecx, esp
0x50E22C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E231: mov     esp, ebp
0x50E233: pop     ebp
0x50E234: retn
0x50E235: fstp    st(1)
0x50E237: fstp    st
0x50E239: mov     ecx, [esp+240h+var_4]
0x50E240: pop     edi
0x50E241: pop     esi
0x50E242: mov     al, bl
0x50E244: pop     ebx
0x50E245: xor     ecx, esp
0x50E247: call    @__security_check_cookie@4; __security_check_cookie(x)
0x50E24C: mov     esp, ebp
0x50E24E: pop     ebp
0x50E24F: retn
