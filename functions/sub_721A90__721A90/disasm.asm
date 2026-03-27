0x721A90: push    ebx
0x721A91: mov     ebx, dword ptr [esp+4+ArgList]
0x721A95: push    esi
0x721A96: mov     eax, ebx
0x721A98: push    edi
0x721A99: lea     edx, [eax+1]
0x721A9C: lea     esp, [esp+0]
0x721AA0: mov     cl, [eax]
0x721AA2: add     eax, 1
0x721AA5: test    cl, cl
0x721AA7: jnz     short loc_721AA0
0x721AA9: sub     eax, edx
0x721AAB: lea     esi, [eax+16h]
0x721AAE: push    esi; Size
0x721AAF: call    FormHeapAlloc
0x721AB4: mov     edi, eax
0x721AB6: mov     eax, [esp+10h+arg_4]
0x721ABA: add     esp, 4
0x721ABD: cmp     eax, 5; switch 6 cases
0x721AC0: ja      def_721AC6
0x721AC6: jmp     ds:jpt_721AC6[eax*4]; switch jump
0x721ACD: push    ebx; jumptable 00721AC6 case 0
0x721ACE: push    offset aSAlways_face_c; "%s = ALWAYS_FACE_CAMERA"
0x721AD3: push    esi; SizeInBytes
0x721AD4: push    edi; DstBuf
0x721AD5: call    sub_6C5D40
0x721ADA: add     esp, 10h
0x721ADD: mov     eax, edi
0x721ADF: pop     edi
0x721AE0: pop     esi
0x721AE1: pop     ebx
0x721AE2: retn
0x721AE3: push    ebx; jumptable 00721AC6 case 1
0x721AE4: push    offset aSRotate_about_; "%s = ROTATE_ABOUT_UP"
0x721AE9: push    esi; SizeInBytes
0x721AEA: push    edi; DstBuf
0x721AEB: call    sub_6C5D40
0x721AF0: add     esp, 10h
0x721AF3: mov     eax, edi
0x721AF5: pop     edi
0x721AF6: pop     esi
0x721AF7: pop     ebx
0x721AF8: retn
0x721AF9: push    ebx; jumptable 00721AC6 case 2
0x721AFA: push    offset aSRigid_face_ca; "%s = RIGID_FACE_CAMERA"
0x721AFF: push    esi; SizeInBytes
0x721B00: push    edi; DstBuf
0x721B01: call    sub_6C5D40
0x721B06: add     esp, 10h
0x721B09: mov     eax, edi
0x721B0B: pop     edi
0x721B0C: pop     esi
0x721B0D: pop     ebx
0x721B0E: retn
0x721B0F: push    ebx; jumptable 00721AC6 case 3
0x721B10: push    offset aSAlways_face_0; "%s = ALWAYS_FACE_CENTER"
0x721B15: push    esi; SizeInBytes
0x721B16: push    edi; DstBuf
0x721B17: call    sub_6C5D40
0x721B1C: add     esp, 10h
0x721B1F: mov     eax, edi
0x721B21: pop     edi
0x721B22: pop     esi
0x721B23: pop     ebx
0x721B24: retn
0x721B25: push    ebx; jumptable 00721AC6 case 4
0x721B26: push    offset aSRigid_face_ce; "%s = RIGID_FACE_CENTER"
0x721B2B: push    esi; SizeInBytes
0x721B2C: push    edi; DstBuf
0x721B2D: call    sub_6C5D40
0x721B32: add     esp, 10h
0x721B35: mov     eax, edi
0x721B37: pop     edi
0x721B38: pop     esi
0x721B39: pop     ebx
0x721B3A: retn
0x721B3B: push    ebx; jumptable 00721AC6 case 5
0x721B3C: push    offset aSBsrotate_abou; "%s = BSROTATE_ABOUT_UP"
0x721B41: push    esi; SizeInBytes
0x721B42: push    edi; DstBuf
0x721B43: call    sub_6C5D40
0x721B48: add     esp, 10h
