0x556440: mov     ecx, [esp+arg_0]
0x556444: sub     esp, 0Ch
0x556447: test    ecx, ecx
0x556449: ja      short loc_55645D
0x55644B: xor     ecx, ecx
0x55644D: imul    ecx, 2Ch ; ','
0x556450: push    ecx; Size
0x556451: call    FormHeapAlloc
0x556456: add     esp, 4
0x556459: add     esp, 0Ch
0x55645C: retn
0x55645D: or      eax, 0FFFFFFFFh
0x556460: xor     edx, edx
0x556462: div     ecx
0x556464: cmp     eax, 2Ch ; ','
0x556467: jnb     short loc_55644D
0x556469: lea     eax, [esp+0Ch+arg_0]
0x55646D: push    eax; char **
0x55646E: lea     ecx, [esp+10h+var_C]; this
0x556472: mov     [esp+10h+arg_0], 0
0x55647A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x55647F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x556484: lea     ecx, [esp+10h+var_C]
0x556488: push    ecx
0x556489: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x556491: call    ThrowException??
