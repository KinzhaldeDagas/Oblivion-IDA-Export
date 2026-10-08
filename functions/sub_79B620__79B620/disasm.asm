0x79B620: push    ebp; Exception-safe uninitialized_fill_n for SFrondTexture. Placement-copy-constructs count records; the SEH cleanup landing path destroys the constructed prefix before rethrowing.
0x79B621: mov     ebp, esp
0x79B623: push    0FFFFFFFFh
0x79B625: push    offset SEH_79B620
0x79B62A: mov     eax, large fs:0
0x79B630: push    eax
0x79B631: sub     esp, 8
0x79B634: push    ebx
0x79B635: push    esi
0x79B636: push    edi
0x79B637: mov     eax, ds:0B30AACh
0x79B63C: xor     eax, ebp
0x79B63E: push    eax
0x79B63F: lea     eax, [ebp+var_C]
0x79B642: mov     large fs:0, eax
0x79B648: mov     [ebp+var_10], esp
0x79B64B: mov     edi, [ebp+destination]
0x79B64E: mov     ebx, [ebp+source]
0x79B651: mov     esi, [ebp+count]
0x79B654: mov     [ebp+var_14], edi
0x79B657: mov     [ebp+var_4], 0
0x79B65E: mov     edi, edi
0x79B660: test    esi, esi
0x79B662: jbe     short loc_79B69E
0x79B664: push    ebx; source
0x79B665: push    edi; this
0x79B666: call    OB_SFrondTexture_CopyCtor_010201A0; Oblivion SFrondTexture copy constructor: deep-copies the 28-byte filename string and copies aspectRatio, sizeScale, minAngleOffset, and maxAngleOffset. The 0x2C layout is established by executable accesses; RT 4.1 FrondEngine.h corroborates the member names.
0x79B66B: add     esp, 8
0x79B66E: sub     esi, 1
0x79B671: add     edi, 2Ch ; ','
0x79B674: mov     [ebp+destination], edi
0x79B677: jmp     short loc_79B660
0x79B679: mov     esi, [ebp+var_14]
0x79B67C: mov     edi, [ebp+destination]
0x79B67F: cmp     esi, edi
0x79B681: jz      short loc_79B695
0x79B683: mov     ebx, [ebp+arg_C]
0x79B686: push    esi; this
0x79B687: mov     ecx, ebx
0x79B689: call    OB_SFrondTexture_Destroy_010201A0; Oblivion SFrondTexture destructor: releases the 28-byte small-string filename when heap-backed (capacity >= 0x10), then resets string length/capacity; scalar fields need no destruction.
0x79B68E: add     esi, 2Ch ; ','
0x79B691: cmp     esi, edi
0x79B693: jnz     short loc_79B686
0x79B695: push    0
0x79B697: push    0
0x79B699: call    ThrowException??
0x79B69E: mov     ecx, [ebp+var_C]
0x79B6A1: mov     large fs:0, ecx
0x79B6A8: pop     ecx
0x79B6A9: pop     edi
0x79B6AA: pop     esi
0x79B6AB: pop     ebx
0x79B6AC: mov     esp, ebp
0x79B6AE: pop     ebp
0x79B6AF: retn
0x9CC250: mov     edx, [esp-4+count]
0x9CC254: lea     eax, [edx+0Ch]
0x9CC257: mov     ecx, [edx-18h]
0x9CC25A: xor     ecx, eax
0x9CC25C: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CC261: mov     eax, offset stru_AF53A8
0x9CC266: jmp     ___CxxFrameHandler3
