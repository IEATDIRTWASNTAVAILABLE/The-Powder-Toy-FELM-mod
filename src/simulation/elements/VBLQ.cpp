#include "simulation/ElementCommon.h"

int Element_VIBR_update(UPDATE_FUNC_ARGS);
int Element_VIBR_graphics(GRAPHICS_FUNC_ARGS);

void Element::Element_VBLQ()
{
	Identifier = "DEFAULT_PT_VBLQ";
	Name = "LQVB";
	Colour = PIXPACK(0x165a06);
	MenuVisible = 1;
	MenuSection = SC_NUCLEAR;
	Enabled = 1;

	Advection = 0.6f;
	AirDrag = 0.01f * CFDS;
	AirLoss = 0.98f;
	Loss = 0.95f;
	Collision = 0.0f;
	Gravity = 0.05f;
	Diffusion = 0.00f;
	HotAir = 0.000f	* CFDS;
	Falldown = 2;

	Flammable = 0;
	Explosive = 0;
	Meltable = 0;
	Hardness = 0;

	Weight = 79;

	DefaultProperties.temp = 273.15f;
	HeatConduct = 164;
	Description = "Liquid Vibranium";

	Properties = TYPE_PART|PROP_LIFE_DEC;

	LowPressure = IPL;
	LowPressureTransition = NT;
	HighPressure = IPH;
	HighPressureTransition = NT;
	LowTemperature = ITL;
	LowTemperatureTransition = NT;
	HighTemperature = ITH;
	HighTemperatureTransition = NT;

	Update = &Element_VIBR_update;
	Graphics = &Element_VIBR_graphics;
}
