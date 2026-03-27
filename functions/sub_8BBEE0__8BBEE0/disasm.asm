0x8BBEE0: sub     esp, 404h
0x8BBEE6: mov     eax, ds:0B30AACh
0x8BBEEB: mov     ecx, [esp+404h+Format]
0x8BBEF2: push    esi
0x8BBEF3: mov     [esp+408h+var_4], eax
0x8BBEFA: push    edi; Args
0x8BBEFB: lea     eax, [esp+40Ch+Args]
0x8BBF02: push    eax; Format
0x8BBF03: push    ecx; Format
0x8BBF04: lea     edx, [esp+414h+Dest]
0x8BBF08: push    400h; Count
0x8BBF0D: push    edx; Dest
0x8BBF0E: call    j___vsnprintf
0x8BBF13: mov     eax, [esp+41Ch+arg_0]
0x8BBF1A: mov     esi, [eax+8]
0x8BBF1D: mov     edi, [esi]
0x8BBF1F: lea     ecx, [esp+41Ch+Dest]
0x8BBF23: push    ecx
0x8BBF24: call    sub_8B1860
0x8BBF29: add     esp, 14h
0x8BBF2C: push    eax
0x8BBF2D: lea     edx, [esp+410h+Dest]
0x8BBF31: push    edx
0x8BBF32: mov     ecx, esi
0x8BBF34: call    dword ptr [edi+0Ch]
0x8BBF37: mov     ecx, [esp+40Ch+var_4]
0x8BBF3E: pop     edi
0x8BBF3F: pop     esi
0x8BBF40: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8BBF45: add     esp, 404h
0x8BBF4B: retn
