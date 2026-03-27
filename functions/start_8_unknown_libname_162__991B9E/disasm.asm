0x991B9E: cmp     word ptr [esp+0], 27Fh
0x991BA4: jz      short fast_exit_CW_is_restored
0x991BA6: fldcw   word ptr [esp+0]
0x991BA9: pop     edx
0x991BAA: retn
