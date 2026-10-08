0x8B1EB0: push    ebp
0x8B1EB1: mov     ebp, esp
0x8B1EB3: and     esp, 0FFFFFFF0h
0x8B1EB6: sub     esp, 1Ch
0x8B1EB9: mov     eax, [ebp+arg_4]
0x8B1EBC: push    esi
0x8B1EBD: mov     esi, ecx
0x8B1EBF: mov     ecx, [ebp+arg_0]
0x8B1EC2: push    eax; float
0x8B1EC3: push    ecx; int
0x8B1EC4: lea     ecx, [esp+28h+var_10]
0x8B1EC8: call    hkQuaternion_SetAxisAngleScaled; Builds a quaternion from an axis vector and scaled angle: vector part = axis*sin(angleScale), w = cos(angleScale). Used by 0x896000 while refreshing movement basis.
0x8B1ECD: lea     edx, [esp+20h+var_10]
0x8B1ED1: push    edx
0x8B1ED2: mov     ecx, esi
0x8B1ED4: call    hkMatrix3_SetFromQuaternion; Converts a quaternion into a 3x3 basis matrix. 0x896000 uses this during per-frame movement basis refresh.
0x8B1ED9: pop     esi
0x8B1EDA: mov     esp, ebp
0x8B1EDC: pop     ebp
0x8B1EDD: retn    8
