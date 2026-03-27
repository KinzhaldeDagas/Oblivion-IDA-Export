0x556350: mov     ecx, [esp+arg_0]
0x556354: sub     esp, 0Ch
0x556357: test    ecx, ecx
0x556359: ja      short loc_55636D
0x55635B: xor     ecx, ecx
0x55635D: shl     ecx, 6
0x556360: push    ecx; Size
0x556361: call    FormHeapAlloc
0x556366: add     esp, 4
0x556369: add     esp, 0Ch
0x55636C: retn
0x55636D: or      eax, 0FFFFFFFFh
0x556370: xor     edx, edx
0x556372: div     ecx
0x556374: cmp     eax, 40h ; '@'
0x556377: jnb     short loc_55635D
0x556379: lea     eax, [esp+0Ch+arg_0]
0x55637D: push    eax; char **
0x55637E: lea     ecx, [esp+10h+var_C]; this
0x556382: mov     [esp+10h+arg_0], 0
0x55638A: call    ??0exception@std@@QAE@ABQBD@Z; std::exception::exception(char const * const &)
0x55638F: push    offset __TI2?AVbad_alloc@std@@; throw info for 'class std::bad_alloc'
0x556394: lea     ecx, [esp+10h+var_C]
0x556398: push    ecx
0x556399: mov     [esp+14h+var_C], offset ??_7bad_alloc@std@@6B@; const std::bad_alloc::`vftable'
0x5563A1: call    ThrowException??
