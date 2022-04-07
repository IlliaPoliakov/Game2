#include"maps.h"

std::vector<std::vector<std::string>>& Maps::GetMap(size_t i) {
	switch (i) {
	case 0: {
		return HelloScrean;
	}
	case 100: {
		return BuyScrean;
	}
	case 1: {
		return MenuScrean;
	}
	case 2: {
		return ChoseStScrean;
	}
	case 1000: {
		return Floor1Map;
	}
	case 2000: {
		return Floor2Map;
	}
	case 3000: {
		return Floor3Map;
	}
	case 51000: {
		return Floor5Map1;
	}
	case 52000: {
		return Floor5Map2;
	}
	}
};

