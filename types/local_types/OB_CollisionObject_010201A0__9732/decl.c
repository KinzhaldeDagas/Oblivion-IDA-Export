struct OB_CollisionObject_010201A0
{
int type; ///< 0 sphere, 1 capsule, 2 box in stock parser/export path.
float position[3]; ///< Three floats.
float dimensions[3]; ///< Sphere uses first component; capsule/box use additional dimensions. No rotation fields in 0x1C stride.
};
