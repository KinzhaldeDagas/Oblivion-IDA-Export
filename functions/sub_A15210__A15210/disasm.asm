0xA15210: push    ebp
0xA15211: mov     ebp, esp
0xA15213: and     esp, 0FFFFFFF0h
0xA15216: sub     esp, 40h
0xA15219: mov     eax, offset ??_7hkMoppCode@@6B@; const hkMoppCode::`vftable'
0xA1521E: mov     [esp+40h+var_30], eax
0xA15222: mov     ecx, [esp+40h+var_30]
0xA15226: mov     byte ptr [esp+40h+var_34], al
0xA1522A: mov     byte ptr [esp+40h+var_34+1], ah
0xA1522E: shr     eax, 10h
0xA15231: shr     ecx, 18h
0xA15234: mov     byte ptr [esp+40h+var_34+2], al
0xA15238: mov     byte ptr [esp+40h+var_34+3], cl
0xA1523C: mov     edx, [esp+40h+var_34]
0xA15240: mov     dword_B304B0, edx
0xA15246: mov     esp, ebp
0xA15248: pop     ebp
0xA15249: retn
