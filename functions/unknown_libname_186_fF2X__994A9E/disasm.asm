0x994A9E: call    unknown_libname_192
0x994AA3: fld1
0x994AA5: faddp   st(1), st
0x994AA7: test    byte ptr [ebp-9Fh], 1
0x994AAE: jz      short unknown_libname_186___fdivr_done
0x994AB0: fld1
0x994AB2: cmp     dword_BA9DE0, 1
0x994AB9: jz      short unknown_libname_186___badP5_fdivr
0x994ABB: fdivrp  st(1), st
0x994ABD: jmp     short unknown_libname_186___fdivr_done
