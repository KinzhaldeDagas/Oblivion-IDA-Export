0x8AF1A0: push    ebp; 2026-05-18 73000 consumer decode: bhkSimpleShapePhantom setup consumes cinfo +0x04 shape pointer and cinfo +0x20 4x4 phantom transform. Treetop collision leaves this phantom transform identity; sidecar rotations should normally use per-shape transform/endpoints before this final wrapper.
0x8AF1A1: mov     ebp, esp
0x8AF1A3: and     esp, 0FFFFFFF0h
0x8AF1A6: push    0FFFFFFFFh
0x8AF1A8: push    offset SEH_8BD480
0x8AF1AD: mov     eax, large fs:0
0x8AF1B3: push    eax
0x8AF1B4: sub     esp, 58h
0x8AF1B7: mov     eax, ds:0B30AACh
0x8AF1BC: xor     eax, esp
0x8AF1BE: mov     [esp+64h+var_14], eax
0x8AF1C2: push    ebx
0x8AF1C3: push    esi
0x8AF1C4: push    edi
0x8AF1C5: mov     eax, ds:0B30AACh
0x8AF1CA: xor     eax, esp
0x8AF1CC: push    eax
0x8AF1CD: lea     eax, [esp+74h+var_C]
0x8AF1D1: mov     large fs:0, eax
0x8AF1D7: mov     esi, [ebp+arg_0]
0x8AF1DA: test    esi, esi
0x8AF1DC: mov     edi, ecx
0x8AF1DE: jz      short loc_8AF249
0x8AF1E0: mov     ecx, ds:0BA7D98h
0x8AF1E6: mov     eax, [ecx]
0x8AF1E8: mov     edx, [eax+10h]
0x8AF1EB: push    2Eh ; '.'
0x8AF1ED: push    130h
0x8AF1F2: call    edx
0x8AF1F4: mov     ebx, eax
0x8AF1F6: mov     word ptr [ebx+4], 130h
0x8AF1FC: mov     [esp+74h+var_64], ebx
0x8AF200: mov     eax, [esi]
0x8AF202: push    eax
0x8AF203: lea     ecx, [esp+78h+var_60]
0x8AF207: push    ecx
0x8AF208: lea     ecx, [esi+20h]
0x8AF20B: mov     [esp+7Ch+var_4], 0
0x8AF213: call    sub_8A2050; 2026-05-18 73000 consumer decode: copies a full 4x4 transform matrix from cinfo into the Havok construction object; rows 0..2 via 0x8A1FB0 and row 3 here. 0x565510 stock callers leave rotation identity and write translation only.
0x8AF218: mov     edx, [esi+4]
0x8AF21B: push    eax
0x8AF21C: push    edx
0x8AF21D: mov     ecx, ebx
0x8AF21F: call    sub_8ECFC0
0x8AF224: mov     ebx, eax
0x8AF226: mov     eax, [edi]
0x8AF228: mov     edx, [eax+4Ch]
0x8AF22B: push    ebx
0x8AF22C: mov     ecx, edi
0x8AF22E: mov     [esp+78h+var_4], 0FFFFFFFFh
0x8AF236: call    edx
0x8AF238: mov     ecx, ebx
0x8AF23A: call    sub_8BC730
0x8AF23F: mov     eax, [edi]
0x8AF241: mov     edx, [eax+7Ch]
0x8AF244: push    esi
0x8AF245: mov     ecx, edi
0x8AF247: call    edx
0x8AF249: mov     ecx, [esp+74h+var_C]
0x8AF24D: mov     large fs:0, ecx
0x8AF254: pop     ecx
0x8AF255: pop     edi
0x8AF256: pop     esi
0x8AF257: pop     ebx
0x8AF258: mov     ecx, [esp+64h+var_14]
0x8AF25C: xor     ecx, esp
0x8AF25E: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8AF263: mov     esp, ebp
0x8AF265: pop     ebp
0x8AF266: retn    4
0x9D7280: mov     eax, [ebp+var_64]
0x9D7283: push    eax
0x9D7284: call    sub_88D520
0x9D7289: pop     ecx
0x9D728A: retn
0x9D728B: mov     edx, [esp-4+arg_4]
0x9D728F: lea     eax, [edx-64h]
0x9D7292: mov     ecx, [edx-68h]
0x9D7295: xor     ecx, eax
0x9D7297: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D729C: add     eax, 0Ch
0x9D729F: mov     ecx, [edx-8]
0x9D72A2: xor     ecx, eax
0x9D72A4: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D72A9: mov     eax, offset stru_AFEF0C
0x9D72AE: jmp     ___CxxFrameHandler3
