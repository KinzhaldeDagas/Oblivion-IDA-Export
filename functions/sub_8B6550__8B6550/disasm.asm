0x8B6550: push    ebp
0x8B6551: mov     ebp, esp
0x8B6553: and     esp, 0FFFFFFF0h
0x8B6556: sub     esp, 0B0h
0x8B655C: mov     edx, [ebp+arg_0]
0x8B655F: xorps   xmm0, xmm0
0x8B6562: lea     eax, [esp+0B0h+var_A0]
0x8B6566: push    eax
0x8B6567: lea     ecx, [esp+0B4h+var_50]
0x8B656B: push    ecx
0x8B656C: movaps  [esp+0B8h+var_50], xmm0
0x8B6571: movaps  [esp+0B8h+var_40], xmm0
0x8B6576: movaps  [esp+0B8h+var_30], xmm0
0x8B657E: push    edx
0x8B657F: movaps  [esp+0BCh+var_90], xmm0
0x8B6584: movaps  [esp+0BCh+var_80], xmm0
0x8B6589: movaps  [esp+0BCh+var_70], xmm0
0x8B658E: movaps  [esp+0BCh+var_60], xmm0
0x8B6593: mov     [esp+0BCh+var_9C], 0
0x8B659B: mov     [esp+0BCh+var_A0], 0
0x8B65A3: mov     dword ptr [esp+0BCh+var_50], 3F800000h
0x8B65AB: mov     dword ptr [esp+0BCh+var_40+4], 3F800000h
0x8B65B6: mov     dword ptr [esp+0BCh+var_30+8], 3F800000h
0x8B65C1: movaps  [esp+0BCh+var_20], xmm0
0x8B65C9: call    sub_8B5E20
0x8B65CE: fld     dword ptr ds:0A2FAA8h
0x8B65D4: fld     [esp+0BCh+var_A0]
0x8B65D8: add     esp, 0Ch
0x8B65DB: fucompp
0x8B65DD: fnstsw  ax
0x8B65DF: test    ah, 44h
0x8B65E2: jnp     short loc_8B664C
0x8B65E4: fld     [ebp+arg_4]
0x8B65E7: lea     eax, [esp+0B0h+var_10]
0x8B65EE: fdiv    [esp+0B0h+var_A0]
0x8B65F2: push    eax
0x8B65F3: lea     ecx, [esp+0B4h+var_80]
0x8B65F7: fld     [esp+0B4h+var_9C]
0x8B65FB: fmul    st, st(1)
0x8B65FD: fstp    [esp+0B4h+var_9C]
0x8B6601: fstp    [esp+0B4h+var_A4]
0x8B6605: movss   xmm0, [esp+0B4h+var_A4]
0x8B660B: movaps  [esp+0B4h+var_10], xmm0
0x8B6613: call    sub_8D2A60
0x8B6618: fld     [esp+0B0h+var_A0]
0x8B661C: mov     eax, [ebp+arg_8]
0x8B661F: movaps  xmm0, [esp+0B0h+var_90]
0x8B6624: fstp    dword ptr [eax]
0x8B6626: mov     ecx, [esp+0B0h+var_9C]
0x8B662A: movaps  xmmword ptr [eax+10h], xmm0
0x8B662E: movaps  xmm0, [esp+0B0h+var_80]
0x8B6633: mov     [eax+4], ecx
0x8B6636: movaps  xmmword ptr [eax+20h], xmm0
0x8B663A: movaps  xmm0, [esp+0B0h+var_70]
0x8B663F: movaps  xmmword ptr [eax+30h], xmm0
0x8B6643: movaps  xmm0, [esp+0B0h+var_60]
0x8B6648: movaps  xmmword ptr [eax+40h], xmm0
0x8B664C: mov     esp, ebp
0x8B664E: pop     ebp
0x8B664F: retn
