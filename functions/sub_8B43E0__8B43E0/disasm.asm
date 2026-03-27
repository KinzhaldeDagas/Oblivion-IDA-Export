0x8B43E0: push    ebp
0x8B43E1: mov     ebp, esp
0x8B43E3: and     esp, 0FFFFFFF0h
0x8B43E6: sub     esp, 0ECh
0x8B43EC: fld     [ebp+arg_4]
0x8B43EF: push    esi
0x8B43F0: fcomp   dword ptr ds:0A2FAA8h
0x8B43F6: fnstsw  ax
0x8B43F8: test    ah, 41h
0x8B43FB: jp      short loc_8B4407
0x8B43FD: mov     eax, 1
0x8B4402: pop     esi
0x8B4403: mov     esp, ebp
0x8B4405: pop     ebp
0x8B4406: retn
0x8B4407: mov     esi, [ebp+arg_0]
0x8B440A: lea     eax, [esp+0F0h+var_E0]
0x8B440E: push    esi
0x8B440F: push    eax
0x8B4410: call    sub_8B4350
0x8B4415: add     esp, 8
0x8B4418: lea     ecx, [esp+0F0h+var_E0]
0x8B441C: push    ecx
0x8B441D: push    esi
0x8B441E: lea     ecx, [esp+0F8h+var_90]
0x8B4422: mov     dword ptr [esp+0F8h+var_E0+0Ch], 0
0x8B442A: call    sub_8B4020
0x8B442F: fld     [esp+0F0h+var_2C]
0x8B4436: mov     esi, [ebp+arg_8]
0x8B4439: fstp    dword ptr [esi]
0x8B443B: lea     edx, [esp+0F0h+var_C0]
0x8B443F: fld     [ebp+arg_4]
0x8B4442: push    edx; int
0x8B4443: fdiv    [esp+0F4h+var_2C]
0x8B444A: lea     eax, [esp+0F4h+var_D0]
0x8B444E: push    eax; int
0x8B444F: push    ecx
0x8B4450: mov     ecx, [ebp+arg_4]
0x8B4453: fstp    [esp+0FCh+var_FC]; float
0x8B4456: push    ecx; float
0x8B4457: lea     ecx, [esp+100h+var_90]
0x8B445B: call    sub_8B3D50
0x8B4460: movaps  xmm1, [esp+0F0h+var_E0]
0x8B4465: movaps  xmm0, [esp+0F0h+var_D0]
0x8B446A: mov     edx, [ebp+arg_4]
0x8B446D: subps   xmm0, xmm1
0x8B4470: movaps  xmmword ptr [esi+10h], xmm0
0x8B4474: movaps  xmm0, [esp+0F0h+var_C0]
0x8B4479: movaps  xmmword ptr [esi+20h], xmm0
0x8B447D: movaps  xmm0, [esp+0F0h+var_B0]
0x8B4482: movaps  xmmword ptr [esi+30h], xmm0
0x8B4486: movaps  xmm0, [esp+0F0h+var_A0]
0x8B448B: movaps  xmmword ptr [esi+40h], xmm0
0x8B448F: mov     [esi+4], edx
0x8B4492: xor     eax, eax
0x8B4494: pop     esi
0x8B4495: mov     esp, ebp
0x8B4497: pop     ebp
0x8B4498: retn
