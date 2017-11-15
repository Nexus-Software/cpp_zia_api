/*
** ModuleCore.hpp for cpp_zia_api in /home/enguerrand/delivery/cpp_zia_api/ModuleCore.hpp
**
** Made by Enguerrand Allamel
** Login   <enguerrand.allamel@epitech.eu>
**
** Started on  Fri Nov 10 14:46:42 2017 Enguerrand Allamel
** Last update Fri Nov 10 14:46:42 2017 Enguerrand Allamel
*/

#ifndef CPP_ZIA_API_MODULECORE_HPP
#define CPP_ZIA_API_MODULECORE_HPP

#include <string>

#include "../Config/Config.hpp"
#include "../Http/HttpData.hpp"
#include "../Hooks/Hooks.hpp"

namespace nexusZiaApi {
	class IModuleCore
	{
	 public:
	  virtual ~IModuleCore() = default;

	  /**
	   * Start module
	   */
	  virtual void	start(void) = 0;

	  /**
	   * Stop module
	   */
	  virtual void	stop(void) = 0;

	  /**
	   * Reload module
	   * @details Module is not stop and restart, module is always UP
	   */
	  virtual void	reload(void) = 0;

	  /**
	   * Set name of module
	   * @param name Name of module
	   */
	  virtual void	setName(const std::string & name) = 0;

	  /**
	   * Get module config
	   * @return const IModuleConfig
	   */
	  virtual const IModuleConfig & getModuleConfig(void) = 0;

	  /**
	   * Function call if event in the hook subsribe
	   * @param hooksType Type of hook
	   * @param data Data http
	   */
	  virtual void hooksCall(const IHooks::Types & hooksType, const IHttpData & data) = 0;
	};
}

#endif //CPP_ZIA_API_MODULECORE_HPP
