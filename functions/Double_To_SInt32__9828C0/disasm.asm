0x9828C0: cmp     dword ptr ds:0BAABE0h, 0
0x9828C7: jz      short __ftol2
0x9828C9: push    ebp
0x9828CA: mov     ebp, esp
0x9828CC: sub     esp, 8
0x9828CF: and     esp, 0FFFFFFF8h
0x9828D2: fstp    [esp+0Ch+var_C]
0x9828D5: cvttsd2si eax, [esp+0Ch+var_C]
0x9828DA: leave
0x9828DB: retn
